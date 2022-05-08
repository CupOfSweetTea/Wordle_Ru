#include <stdio.h>
#include <locale.h>
#include "wordle.h"

void print_on_screen(char attempts1[], char answers[], int attempts[], int N) {
	setlocale(LC_ALL, "Russian");
	for (int i = 0; i < N - 2; i++) {
		if (attempts1[i] != answers[i]) {
			for (int j = 0; j < N - 2; j++) {
				if (attempts1[i] == answers[j]) {
					attempts[i] = 1;
				}
			}
		}
		else if (attempts1[i] == answers[i]) {
			attempts[i] = 2;
		}
	}
	for (int i = 0; i < N - 2; i++) {
		set_hint_color(attempts[i]);

		printf("+---+");
	}
	printf("\n");
	for (int i = 0; i < N - 2; i++) {
		set_hint_color(attempts[i]);

		printf("| %c |", attempts1[i]);
	}
	printf("\n");
	for (int i = 0; i < N - 2; i++) {
		set_hint_color(attempts[i]);

		printf("+---+");
	}

	printf("\033[0m");
	printf("\n");
}