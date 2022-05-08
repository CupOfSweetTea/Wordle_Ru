#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "wordle.h"

int wordleGame(void) {
	setlocale(LC_ALL, "Russian"); // enables Russian in the console
	system("chcp 1251"); // Corrects the program's understanding of the Russian language
	system("@cls||clear"); // Removes the inscription "Current code page: 1251"
	srand(time(NULL));
	const int Y = 7;
	const int N_line = 4154;
	const char New[Y] = "";
	char answer[Y] = "", attempt1[Y] = "", check_exist[Y] = "", line[Y] = "";
	int i = 0, j = 0, attempt[Y] = { 0,0,0,0,0,0,0 }, o = 0, WExist = 0;
	FILE* fptr;
	if ((fopen_s(&fptr, "words.txt", "r")) != NULL) {
		perror("Error");
		return 1;
	}
	int word = rand() % (N_line + 1);
	while (fgets(line, Y, fptr)) {
		i++;
		if (i == word) {
			for (int j = 0; j < Y - 2; j++) {
				answer[j] = line[j];
			}
			answer[5] = line[6];
		}
	}
	fclose(fptr);
	for (i = 0; i < Y; i++) {
		line[i] = New[i];
	}

	do
	switch (o) {
		case 0: printf("Попытка 1: ");
			scanf_s("%s", attempt1, Y);
			attempt1[6] = line[6];
			FILE* fptr;
			if ((fopen_s(&fptr, "words.txt", "r")) != NULL) {
				perror("Error");
				return 1;
			}
			while (fgets(line, Y, fptr)) {
				for (int j = 0; j < Y - 2; j++) {
					check_exist[j] = line[j];
				}
				check_exist[5] = line[6];
				if (strcmp(attempt1, check_exist) == 0) {
					WExist++;
				}
			}
			fclose(fptr);

			if (WExist == 1) {
				print_on_screen(attempt1, answer, attempt, Y);
				o++;
				if (strcmp(attempt1, answer) == 0) {
					o = 7;
				}
			}
			else {
				printf("Такого слова нет в нашем списке, либо же оно состоит из бессвязного набора букв. Попытка не засчитана.\n\n");
			}
			for (i = 0; i < Y; i++) {
				attempt[i] = 0;
			}
			WExist = 0;
			for (i = 0; i < Y; i++) {
				line[i] = New[i];
			}
			break;

		case 1: printf("Попытка 2: ");
			scanf_s("%s", attempt1, Y);
			attempt1[6] = line[6];
			FILE* fpt;
			if ((fopen_s(&fpt, "words.txt", "r")) != NULL) {
				perror("Error");
				return 1;
			}
			while (fgets(line, Y, fpt)) {
				for (int j = 0; j < Y - 2; j++) {
					check_exist[j] = line[j];
				}
				check_exist[5] = line[6];
				if (strcmp(attempt1, check_exist) == 0) {
					WExist++;
				}
			}
			fclose(fpt);

			if (WExist == 1) {
				print_on_screen(attempt1, answer, attempt, Y);
				o++;
				if (strcmp(attempt1, answer) == 0) {
					o = 7;
				}
			}
			else {
				printf("Такого слова нет в нашем списке, либо же оно состоит из бессвязного набора букв. Попытка не засчитана.\n\n");
			}
			for (i = 0; i < Y; i++) {
				attempt[i] = 0;
			}
			WExist = 0;
			for (i = 0; i < Y; i++) {
				line[i] = New[i];
			}
			break;
		
		case 2: printf("Попытка 3: ");
			scanf_s("%s", attempt1, Y);
			attempt1[6] = line[6];
			FILE* fp;
			if ((fopen_s(&fp, "words.txt", "r")) != NULL) {
				perror("Error");
				return 1;
			}
			while (fgets(line, Y, fp)) {
				for (int j = 0; j < Y - 2; j++) {
					check_exist[j] = line[j];
				}
				check_exist[5] = line[6];
				if (strcmp(attempt1, check_exist) == 0) {
					WExist++;
				}
			}
			fclose(fp);

			if (WExist == 1) {
				print_on_screen(attempt1, answer, attempt, Y);
				o++;
				if (strcmp(attempt1, answer) == 0) {
					o = 7;
				}
			}
			else {
				printf("Такого слова нет в нашем списке, либо же оно состоит из бессвязного набора букв. Попытка не засчитана.\n\n");
			}
			for (i = 0; i < Y; i++) {
				attempt[i] = 0;
			}
			WExist = 0;
			for (i = 0; i < Y; i++) {
				line[i] = New[i];
			}
			break;
		
		case 3: printf("Попытка 4: ");
			scanf_s("%s", attempt1, Y);
			attempt1[6] = line[6];
			FILE* f;
			if ((fopen_s(&f, "words.txt", "r")) != NULL) {
				perror("Error");
				return 1;
			}
			while (fgets(line, Y, f)) {
				for (int j = 0; j < Y - 2; j++) {
					check_exist[j] = line[j];
				}
				check_exist[5] = line[6];
				if (strcmp(attempt1, check_exist) == 0) {
					WExist++;
				}
			}
			fclose(f);

			if (WExist == 1) {
				print_on_screen(attempt1, answer, attempt, Y);
				o++;
				if (strcmp(attempt1, answer) == 0) {
					o = 7;
				}
			}
			else {
				printf("Такого слова нет в нашем списке, либо же оно состоит из бессвязного набора букв. Попытка не засчитана.\n\n");
			}
			for (i = 0; i < Y; i++) {
				attempt[i] = 0;
			}
			WExist = 0;
			for (i = 0; i < Y; i++) {
				line[i] = New[i];
			}
			break;
		
		case 4: printf("Попытка 5: ");
			scanf_s("%s", attempt1, Y);
			attempt1[6] = line[6];
			FILE* fptr1;
			if ((fopen_s(&fptr1, "words.txt", "r")) != NULL) {
				perror("Error");
				return 1;
			}
			while (fgets(line, Y, fptr1)) {
				for (int j = 0; j < Y - 2; j++) {
					check_exist[j] = line[j];
				}
				check_exist[5] = line[6];
				if (strcmp(attempt1, check_exist) == 0) {
					WExist++;
				}
			}
			fclose(fptr1);

			if (WExist == 1) {
				print_on_screen(attempt1, answer, attempt, Y);
				o++;
				if (strcmp(attempt1, answer) == 0) {
					o = 7;
				}
			}
			else {
				printf("Такого слова нет в нашем списке, либо же оно состоит из бессвязного набора букв. Попытка не засчитана.\n\n");
			}
			for (i = 0; i < Y; i++) {
				attempt[i] = 0;
			}
			WExist = 0;
			for (i = 0; i < Y; i++) {
				line[i] = New[i];
			}
			break;
		
		case 5: printf("Попытка 6: ");
			scanf_s("%s", attempt1, Y);
			attempt1[6] = line[6];
			FILE* fptr2;
			if ((fopen_s(&fptr2, "words.txt", "r")) != NULL) {
				perror("Error");
				return 1;
			}
			while (fgets(line, Y, fptr2)) {
				for (int j = 0; j < Y - 2; j++) {
					check_exist[j] = line[j];
				}
				check_exist[5] = line[6];
				if (strcmp(attempt1, check_exist) == 0) {
					WExist++;
				}
			}
			fclose(fptr2);

			if (WExist == 1) {
				print_on_screen(attempt1, answer, attempt, Y);
				o++;
				if (strcmp(attempt1, answer) == 0) {
					o = 7;
				}
			}
			else {
				printf("Такого слова нет в нашем списке, либо же оно состоит из бессвязного набора букв. Попытка не засчитана.\n\n");
			}
			for (i = 0; i < Y; i++) {
				attempt[i] = 0;
			}
			WExist = 0;
			for (i = 0; i < Y; i++) {
				line[i] = New[i];
			}
			break;

		case 6: printf("\nВы проиграли! Правильный ответ: %s", answer);
			o = 8;
			break;

		case 7: printf("\nВы выиграли! Поздравляем!");
			o = 8;
			break;

		default: break;
		}
	while (o != 8);
	return 0;
}