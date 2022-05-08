#include <stdio.h>

void set_hint_color(int hint_color) {
	if (hint_color == 2) {
		// set green
		printf("\033[0;32m");
	}
	else if (hint_color == 1) {
		// set yellow
		printf("\033[0;33m");
	}
	else {
		// set default
		printf("\033[0m");
	}
}
