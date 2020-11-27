#ifndef _ORGNSM_H_
#define _ORGNSM_H_
#include "map.h"

struct Stat{
	int hp, atk, def, exp, lvl;
	Stat operator += (Stat stat);
};

class Orgnsm : public Obj{
	private:
	Stat stat;

	public:
	Orgnsm(int y, int x, ObjType type, char icon, Stat stat);
	virtual ~Orgnsm();
	Stat getStat();
	Stat changeStat(Stat stat = (Stat){0, 0, 0, 0, 0});  //adding 'd' means delta. I didn't add dlvl in the parameter becuase lvl should be updated depending on exp
};

#endif