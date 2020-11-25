#include <iostream>
#include "movement.h"
#include "maincharacter.h"
#include "story.h"
using namespace std;

string level1[5][5]
{
  {"-" , "-" , "-" , "-" , "-"},
  {" " , " " , " " , " " , "|"},
  {"|" , " " , " " , " " , "|"},  
  {"|" , " " , " " , " " , "|"},
  {"-" , "-" , "-" , "-" , "-"},
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

  while(true){
  
  level1[a.y][a.x] = a.apparence;
  drawboard1();

  //if loop
  if(level1[a.y-1][a.x] == " ")
  {
    level1[a.y][a.x] = " ";
    a.y--;
  }
  else if(level1[a.y][a.x-1] == " ")
  {
    level1[a.y][a.x] = " ";
    a.x--;
  }
  int z = 0;
  cin>>z;

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