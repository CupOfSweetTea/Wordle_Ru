#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include "wordle.h"


int main(void) {
	setlocale(LC_ALL, "Russian");
	int restart = 0;
	startScreen();
	wordleGame();
	printf("\nХотите перезапустить игру? 1 - да, 0 - нет.  ");
	scanf_s("%d", &restart);
	do
	{ 
		system("@cls||clear");
		wordleGame();
		printf("\nХотите перезапустить игру? 1 - да, 0 - нет.  ");
		scanf_s("%d", &restart);
	}
	while (restart != 0);
	return 0;
}