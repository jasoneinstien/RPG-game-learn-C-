#include "map.h"

Obj::Obj(int y, int x, ObjType type){
	this->y = y;
	this->x = x;
	this->type = type;
}

int Obj::getx(){
	return this->x;
}

int Obj::gety(){
	return this->y;
}

ObjType Obj::getType(){
	return this->type;
}

