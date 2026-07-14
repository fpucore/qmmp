# Qmmp (for H-Linux)

(Patched Qmmp audio-player, supporting the ffmpeg-next framework. Compiled for H-Linux.)

An upstream, patched build of the Qmmp audio player, explicitly modified and compiled for the GNU Operating System / H-Linux environment, and compatibility with the ffmpeg-next framework.

This repository contains the modified source code and the specialized build tools required to compile and install the package.

## 🛠️ Custom Modifications

This build diverges from the regular upstream Qmmp source to seamlessly integrate with the GNU Operating System / H-Linux environment:

- H-Linux integration
- ffmpeg-next compatibility patches
- Custom build tools

## 📦 Dependencies

This package is intended for deep integration with the GNU Operating system / H-Linux environment, and the Blackbox-hwm workspace.

It requires the following components:

* GNU Operating System / H-Linux
* H-Linux Standard Library
* goto
* H-Linux Human Command Layer
* ffmpeg-next

## ⚙️ Build Script (INSTALL.sh)

Standard makepkg execution aggressively extracts fresh source archives, which will instantly destroy local source code modifications.

To safely compile this package, and protect the source code, use ONLY the included INSTALL.sh build script.

This script performs a targeted "sterilization sweep" before compilation:

- Detects and destroys volatile CMake artifacts (CMakeCache.txt, CMakeFiles)
- Sweeps auto-generated compiler_depend.ts files
- Executes makepkg with strict arguments to bypass archive extraction to build directly from the source tree

## 🚀 Build & Install

1. Clone the repository:

```bash
git clone https://www.github.com/fpucore/qmmp
```

2. Execute the build script:

```bash
./INSTALL.sh
```

## 📝 Maintenance Notes

If you need to make further modifications to the source code, simply edit the files in the src/qmmp-*/ directory and re-run the build script (INSTALL.sh).

The build script will automatically clear the old CMake cache and generate a fresh package containing your latest changes.

## License

Licensed under GPLv2 or later. See https://www.gnu.org/licenses/gpl-2.0.html

## Author

Chris McGimpsey-Jones (2026)

chrisjones.unixmen@gmail.com
