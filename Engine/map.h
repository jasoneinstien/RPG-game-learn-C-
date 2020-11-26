typedef enum { 
	player, villian, item, wall
	// not yet have item but first put it here
} ObjType;


// Every Object
class Obj{
	private:
	int y, x;
	ObjType type;
	
	public:
	Obj(int y, int x, ObjType type);
	// ~Obj();    // I don't think Obj needs a destructor
	
	int gety();
	int getx();
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
};