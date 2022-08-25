
# Maintainer: Your Name <admin@matsyos.ml>
pkgname=core
pkgver=1
pkgrel=1
pkgdesc="core of Matsya Ui."
arch=('x86_64')
url="https://github.com/MatsyaOs/core"
license=('GPL')
groups=('Matsya')
makedepends=('git')
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
