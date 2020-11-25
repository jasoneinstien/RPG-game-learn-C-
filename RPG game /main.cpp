#include <iostream>
#include "movement.h"
#include "maincharacter.h"
#include "story.h"
using namespace std;

string level1[5][5]
{
  {"#" , "#" , "#" , "#" , "#"},
  {" " , " " , " " , " " , "#"},
  {"#" , " " , " " , " " , "#"},  
  {"#" , " " , " " , " " , "#"},
  {"#" , "#" , "#" , "#" , "#"},
};



void drawboard1();
void clean();
//main game loop
int main()
{
//main charater 
  maincharacter a;
  a.apparence = 'A';
  a.blood =100;
  a.y = 3;
  a.x = 3;
//main game loop
  while(true){
  
    level1[a.y][a.x] = a.apparence;
    drawboard1();

  //if loop
    char z = ' ';
    cin>>z;
    if(z == 'w' && level1[a.y - 1][a.x] != "#")
    {
      level1[a.y][a.x] = " ";
      a.y -=1 ;
    }
    else if(z == 's' && level1[a.y + 1][a.x] != "#")
    {
      level1[a.y][a.x] = " ";
      a.y +=1 ;
    }
    else if(z == 'd' && level1[a.y][a.x+1] != "#")
    {
      level1[a.y][a.x] = " ";
      a.x +=1 ;
    }
    else if(z == 'a' && level1[a.y][a.x-1] != "#")
    {
      level1[a.y][a.x] = " ";
      a.x -=1 ;
    }

    
    //break loop
    if(a.y == 1 && a.x ==0){
      break;
    }
    clean();
  
  }

}

void drawboard1()
{
  for(int i = 0 ; i<5 ; i++){
    for(int j= 0 ; j<5;j++){
      cout<<level1[i][j];
    }
    cout<<endl;
  }
};

void clean()
{
  for(int i= 0 ; i<33;i++){
    cout<<endl;
  }
}