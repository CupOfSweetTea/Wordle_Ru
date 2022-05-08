#include <Windows.h>
#include <locale.h>
#include <conio.h>
#include <stdio.h>

void startScreen(void) {
	setlocale(LC_ALL, "Russian");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@               @              @              @              @              @              @              @@\n");
	printf("@@   @       @   @     @@@@@@   @     @@       @     @@@@     @     @@@@     @   @@     @@  @     @@@@@@   @@\n");
	printf("@@   @   @   @   @     @@       @     @@       @    @@        @    @@  @@    @   @ @   @ @  @     @@       @@\n");
	printf("@@    @ @ @ @    @     @@@@@    @     @@       @    @@        @    @@  @@    @   @  @ @  @  @     @@@@@@   @@\n");
	printf("@@    @ @ @ @    @     @@       @     @@       @    @@        @    @@  @@    @   @   @   @  @     @@       @@\n");
	printf("@@     @   @     @     @@@@@@   @     @@@@@    @     @@@@     @     @@@@     @   @       @  @     @@@@@@   @@\n");
	printf("@@               @              @              @              @              @              @              @@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	Sleep(50);
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@              @              @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     @@@@@@   @     @@@@     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       @@     @    @@  @@    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       @@     @    @@  @@    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       @@     @    @@  @@    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       @@     @     @@@@     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@              @              @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	Sleep(50);
	printf("@@@@@@@@@               @              @              @              @              @              @@@@@@@@@@\n");
	printf("@@@@@@@@@   @       @   @     @@@@     @    @@@@@     @    @@@@@     @     @@       @     @@@@@@   @@@@@@@@@@\n");
	printf("@@@@@@@@@   @   @   @   @    @@  @@    @    @@  @@    @    @@  @@    @     @@       @     @@       @@@@@@@@@@\n");
	printf("@@@@@@@@@    @ @ @ @    @    @@  @@    @    @@@@@@    @    @@   @@   @     @@       @     @@@@@    @@@@@@@@@@\n");
	printf("@@@@@@@@@    @ @ @ @    @    @@  @@    @    @@ @@     @    @@  @@    @     @@       @     @@       @@@@@@@@@@\n");
	printf("@@@@@@@@@     @   @     @     @@@@     @    @@  @@    @    @@@@@     @     @@@@@    @     @@@@@@   @@@@@@@@@@\n");
	printf("@@@@@@@@@               @              @              @              @              @              @@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\n������� ����� �������, ����� ����������...  ");
	_getch();
	system("@cls||clear");
	printf("================================================================================================================\n");
	printf("������� ����� ������:\n");
	printf("��� ����� ������� ������� ����� (5 ����) �� 6 �������. ����� ������, ������ ������� ����� ����� � ������ ������. \n");
	printf("���� ����� ������� ��������� � ��������� � ���������� �����, ��� ����� �������� � ");
	printf("\033[0;32m������\033[0m");
	printf(",\n���� ����� ��������� � �����, �� �� � ��� ����� - � ");
	printf("\033[0;33m�����\033[0m");
	printf(", � ���� ����� ��� � �����, ��� ��������� ������.\n");
	printf("================================================================================================================\n");
	printf("��� ������ � Wordle?\n\n");
	printf("1) ������� ������ �����.\n");
	printf("����� ������, ������ ������� ����� ����� �� ���� ����, ����� ������, ����� ����� ������������� �������� �����. \n� ����� ��������� � ��� ����� 6 ������� ������� ������� �����.\n\n");
	printf("2) �������, ����� ����� ��������� � ������� �����.\n");
	printf("���� �����-���� ����� �������� \033[0;33m�����\033[0m, ��� ��������, ��� ��� ����� ��������� � ������� �����,\n�� �� ������������� ������� ��������������");
	printf("� ���� �����. ���� �����-���� ����� �������� \033[0;32m������\033[0m,\n�� ��� ��������� � ���� ����� � ��������� �� ���� ��������������. ���� ����� �������� ������, \n����� ���� ����� ��� � ������� �����.\n\n");
	printf("3) ���������� ������� ������� �����.\n");
	printf("������, ���� �� ������ ��������� ���� � ������ ������������� (�������) � ��������� ����, \n������� ��������� � ����� (������), �� ������ ���������� ");
	printf("��������� ������� ����� � �������� ����!\n");
	printf("================================================================================================================\n");
	printf("\n������� ����� �������, ����� ������ ���������...  ");
	_getch();
	system("@cls||clear");
}