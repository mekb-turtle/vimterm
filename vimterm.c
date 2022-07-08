#include <stdio.h>
#include <unistd.h>
#define TERMINAL "/usr/bin/kitty"
#define EDITOR   "/usr/bin/vim"
int main(int argc, char* argv[]) {
	char* args[argc+1];
	args[0] = TERMINAL;
	args[1] = EDITOR;
	for (int i = 1; i < argc; ++i) {
		args[i+1] = argv[i];
	}
	args[argc+1] = NULL;
	execvp(TERMINAL, args);
}
