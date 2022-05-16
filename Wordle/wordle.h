#pragma once
//================== Game ==================
int wordleGame(void);

//====== Screen (print, color, etc.) =======
void startScreen(void);
void set_hint_color(int hint_color);
void print_on_screen(char attempts1[], char answers[], int attempts[], int N);
