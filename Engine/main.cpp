#include <iostream>
#include <ncurses.h>
#include "map.h"
#include "orgnsm.h"

int main(){
	//initscr();
	//curs_set(0);
	Map map(10, 10);
	Orgnsm p(0, 0, orgnsm, 'P', (Stat){0, 0, 0, 0, 0});
	map.fill(&p);    
  //<- need to call this so that player is put inside map 
	//map.draw();   
  //<- this should be used to draw the screen
	//getch();
	//endwin();
	return 0;
}