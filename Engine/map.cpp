#include "map.h"
#include <vector>
#include <ncurses.h>

Obj::Obj(int y, int x, ObjType type, char icon){
	this->y = y;
	this->x = x;
	this->type = type;
	this->icon = icon;
}

Obj::~Obj(){ }

int Obj::getx(){
	return this->x;
}

int Obj::gety(){
	return this->y;
}

char Obj::getIcon(){
	return this->icon;
}

ObjType Obj::getType(){
	return this->type;
}



Map::Map(int height, int width){
	this->height = height;
	this->width = width;
	this->map = new Obj*[height*width];
}

Map::~Map(){
	delete[] this->map;
}

int Map::con(int y, int x){
	return y*this->width + x;
}

bool Map::coorCheck(int y, int x){
	return ( y>= 0 && y < this->height && x >= 0 && x < this->width );
}

int Map::fill(Obj* obj){
	if (!obj) return 0;
	if (!coorCheck(obj->gety(), obj->getx())) return 0;
	map[ con( obj->gety(), obj->getx() ) ] = obj;
	return 1;
}

int Map::draw(){
	// create vector of objs on map
	std::vector<Obj*> objv;
	for (int i = 0; i<height*width; i++)
		if (map[i]) objv.push_back(map[i]);

	//draw the map
	for (int i = 0; i<objv.size(); i++)
		mvaddch(objv.at(i)->gety(), objv.at(i)->getx(), objv.at(i)->getIcon());

	return 1;
}