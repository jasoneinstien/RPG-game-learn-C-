#include <iostream>
#include <ncurses.h>

int main(){
	initscr();
	mvprintw(0, 0, "Hello World");
	getch();
	endwin();
	return 0;
}