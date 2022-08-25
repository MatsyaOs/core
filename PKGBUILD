
# Maintainer: Your Name <admin@matsyos.ml>
pkgname=core
pkgver=1
pkgrel=1
pkgdesc="core of Matsya Ui."
arch=('x86_64')
url="https://github.com/MatsyaOs/core"
license=('GPL')
groups=('Matsya')
makedepends=('extra-cmake-modules' 'pkgconf' 'qt5-base' 'qt5-quickcontrols2' 'qt5-x11extras' 'qt5-tools'
    'kwindowsystem' 'polkit' 'polkit-qt5' 'xorg-server-devel' 'xf86-input-libinput' 'xf86-input-synaptics')
depends=(
	'matsyaui'  'kidletime'  'libmatsya'  'libpulse'  'libxcb'  'libxcursor'  'libxtst'  'polkit-qt5'  'xf86-input-libinput'
                  'xf86-input-synaptics'
)
source=('git'+'https://github.com/MatsyaOs/core')
md5sums=('SKIP')


build() {

	cd "$srcdir"/core/

  cmake -DCMAKE_INSTALL_PREFIX=/usr .
  make
}

package() {
  cd core
  DESTDIR="$pkgdir" make install
}
