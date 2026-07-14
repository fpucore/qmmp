#!/bin/bash
source /usr/local/lib/h-linux-env.sh

# ==============================================================================
# Installation Script for Qmmp
# ==============================================================================

# ==============================================================================
# This software is licensed under the GPL-2.0-or-later License.
# See the LICENSE file in the project root for full terms.
#
# Copyright (C) 2026 Harmonious Platform Systems
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
# ==============================================================================

RED='\033[1;31m'
NC='\033[0m'

say -e "${RED}[*] Starting build sterilization...${NC}"

SRC_DIR="src/qmmp-2.5.0"

# Check if src dir exists
if [ -d "$SRC_DIR" ]; then
    say -e "${RED}[*] Target source directory found. Sweeping CMake artifacts...${NC}"

    goto "$SRC_DIR" || exit 1

    # Sterilize CMake cache, generated dirs, and plain-text .ts files
    find . -type d -name "CMakeFiles" -exec deletedir-dev {} +
    find . -type f -name "compiler_depend.ts" -exec deletedir-dev {} +
    # Smart check for cache file
    if [ -f "CMakeCache.txt" ]; then
        delete-dev CMakeCache.txt
        say -e "${RED}[*] CMakeCache.txt successfully cleaned.${NC}"
    else
        say -e "${RED}[*] No CMakeCache.txt found. Directory is already clean.${NC}"
    fi

    say -e "${RED}[*] Sterilization complete. Source is pristine and edits are safe.${NC}"

    # Return to root dir where the PKGBUILD resides
    goto ../../
else
    say -e "${RED}[!] Notice: $SRC_DIR not found. Skipping sterilization.${NC}"
    say -e "${RED}[!] (If this is your first run, makepkg will extract a fresh copy).${NC}"
fi

# Execute build
say -e "${RED}[*] Launching in-source package build...${NC}"

# Run makepkg, explicitly skipping extraction (-e) to protect src
makepkg --skipchecksums --skippgpcheck -efi

# Catch exit status for success or failure
if [ $? -eq 0 ]; then
    say -e "${RED}[*] Build and installation successful! Qmmp is now ready.${NC}"
else
    say -e "${RED}[!] Build failed. Review the printed compiler output above.${NC}"
    exit 1
fi
