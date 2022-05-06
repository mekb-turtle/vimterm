.PHONY: all
all: clean compile
clean:
	rm -fv -- vimterm
compile: vimterm
install:
	install -Dm755 vimterm /usr/bin/vimterm
uninstall:
	rm -fv -- /usr/bin/vimterm
