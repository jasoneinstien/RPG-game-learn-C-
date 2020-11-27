#include "orgnsm.h"

Stat Stat::operator += (Stat stat){
	this->hp += stat.hp;
	this->atk += stat.atk;
	this->def += stat.def;
	this->exp += stat.exp;
	this->lvl += stat.lvl;
}

Orgnsm::Orgnsm(int y, int x, ObjType type, char icon, Stat stat) : Obj::Obj(y, x, type, icon){
	this->stat = stat;	
}

Orgnsm::~Orgnsm(){ }

Stat Orgnsm::getStat(){
	return stat;
}

Stat Orgnsm::changeStat(Stat stat){
	this->stat += stat;
	return stat;
}