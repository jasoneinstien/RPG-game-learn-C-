#ifndef _MAP_H_
#define _MAP_H_

typedef enum { 
	orgnsm, item, wall
	// not yet have item but first put it here
} ObjType;


// Every Object
class Obj{
	protected:
	int y, x;
	ObjType type;
	char icon;

	public:
	Obj(int y, int x, ObjType type, char icon = '.');
	virtual ~Obj();   
	
	int gety();
	int getx();
	char getIcon();
	ObjType getType();
};

class Map{
	private:
	int height, width;    // height and width of Map, including the surrounding walls, such that bounds check when Obj moves can be simplier
	Obj** map;    // uses 1d array of Obj pointers such that certain operations can be made easier ( not using nested for loop ) eg drawing map

	public:
	Map(int height, int width);
	~Map();
	int con(int y, int x);    // since using 1d array, better have a function converting yx coordintaes to array index
	bool coorCheck(int y, int x);    // use this to check if coordintaes is out of bounds or not
	int fill(Obj* obj);    // this function fills in 1 unit only
	int remove(int y, int x);    // this function removes an obj in the coordinate
	int draw();    // this function loops from the map array, creates a vector of Objs on the map(in case some Obj takes up a few units) , and renders them
};

#endif