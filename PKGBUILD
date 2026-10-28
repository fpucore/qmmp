# Maintainer: Chris McGimpsey-Jones <chrisjones.unixmen@gmail.com>
# Contributor: Jaroslav Lichtblau <svetlemodry@archlinux.org>

pkgname=qmmp
pkgver=2.5.1
pkgrel=1
pkgdesc="Patched Qmmp audio-player, supporting the ffmpeg-next framework. Compiled for GNU Operating System / H-Linux."
arch=('x86_64')
url="https://www.freedompublishersunion.net"
license=('GPL')
depends=('alsa-lib' 'curl' 'desktop-file-utils' 'hicolor-icon-theme' 'libmad' 'libvorbis'
         'libogg' 'taglib' 'xdg-utils' 'qt6-base' 'qt6-multimedia')
# Change ffmpeg dependency > ffmpeg-next
# lame is a dependency
# Remove pulseaudio as a dependency as we use pipewire
makedepends=('cmake' 'flac' 'jack' 'libmpcdec' 'pipewire' 'ffmpeg-next' 'lame' 'libcdio-paranoia'
             'libcddb' 'libmms' 'libsamplerate' 'libmodplug' 'libsndfile' 'wavpack' 'mpg123' 'mesa'
             'projectm' 'faad2' 'libgme' 'libsidplayfp' 'opusfile>=0.12' 'wildmidi' 'qt6-tools')
optdepends=('mpg123: to play MP3 files'
            'flac: native FLAC support'
            'jack: JACK sound output'
            'libmpcdec: Musepack support'
            'pulseaudio: PulseAudio output'
            'pipewire: pipewire support'
            'libcdio-paranoia: Compact Disc input and control support'
            'libcddb: CDDB server support'
            'libmms: MMS stream protocol support'
            'libmodplug: MOD playing library'
            'libsndfile: sampled sound support'
            'projectm: visual efects'
            'faad2: ADTS AAC support'
            'libgme: support for chiptunes from various platforms'
            'libsidplayfp: C64 music support'
            'opusfile: Opus support'
            'wildmidi: MIDI support'
            'libsamplerate' 'wavpack')

#source=(https://qmmp.ylsoftware.com/files/qmmp/2.3/qmmp-2.3.3.tar.bz2)
sha512sums=('SKIP')

build() {
  cd "${srcdir}"/$pkgname-2.5.1

# Tell CMake to search for projectM4 quietly without printing warnings
  sed -i 's/find_package(projectM4 COMPONENTS Playlist)/find_package(projectM4 QUIET COMPONENTS Playlist)/g' src/plugins/Visual/projectm/CMakeLists.txt

export PKG_CONFIG_PATH="/usr/local/lib/pkgconfig:/usr/lib/ffmpeg4.4/pkgconfig:$PKG_CONFIG_PATH"

# Run CMake with added policy suppression for cleaner build
  cmake . -Wno-policy -DCMAKE_INSTALL_PREFIX=/usr -DUSE_FFMPEG=ON

  make
}

package() {
  cd "${srcdir}"/$pkgname-2.5.1

  make DESTDIR="${pkgdir}" install
}
