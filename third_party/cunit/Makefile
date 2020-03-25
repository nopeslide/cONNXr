
CUNIT=CUnit-2.1-3

all: build

build: $(CUNIT).tar.bz2
	tar -xvf $(CUNIT).tar.bz2
	cd $(CUNIT);\
	libtoolize --force --copy; \
	aclocal; \
	autoheader; \
	automake --add-missing --include-deps --copy; \
	autoconf; \
	./configure \
    --prefix=$(shell pwd)/build \
    --enable-automated \
    --enable-basic \
    --enable-console \
    --enable-test \
    --enable-shared \
    --enable-static
	make -C $(CUNIT) install

.phony: clean
clean:
	rm -rf $(CUNIT)

.phony: distclean
distclean: clean
	rm -rf build
