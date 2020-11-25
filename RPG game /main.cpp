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

int main()
{
  maincharacter a;
  a.apparence = 'A';
  a.blood =100;
  a.x = 1;
  a.y = 0;
  int i = 3;
  while(i++){
  level1[a.x][a.y] = a.apparence;
  drawboard1();
  if(level1[a.x+1][a.y]  == "|" )
  {
    level1[a.x][a.y] = " ";
    a.y += 1;
    
  }else
  {
    level1[a.x][a.y] = " ";
    a.x += 1;
  }

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