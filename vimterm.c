#include <stdio.h>
#include <unistd.h>
char* terminal = "/usr/bin/kitty";
char* editor = "/usr/bin/vim";
int main(int argc, char* argv[]) {
	char *a[2] = {NULL};
	char* args[argc+1];
	args[0] = terminal;
	args[1] = editor;
	for (int i = 1; i < argc; ++i) {
		args[i+1] = argv[i];
	}
	args[argc+1] = NULL;
	execvp(terminal, args);
}
