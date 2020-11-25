#include <iostream>
#include "movement.h"
#include "maincharacter.h"
#include "story.h"
#include "attack.h"
#include "level1villain.h"
using namespace std;

string level1[5][5]
{
  {"#" , "#" , "#" , "#" , "#"},
  {" " , "2" , " " , " " , "#"},
  {"#" , " " , " " , "1" , "#"},  
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
  a.defense =11;
  a.attack = 3;
  Lv1 lv1;
  lv1.power = 7;
  lv1.blood = 40;
  lv1.defense =10;
  Lv1 lv2;
  lv2.power = 6;
  lv2.blood = 100;
  lv2.defense =10;
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
    }else if(z=='b'){
      bag(z);
    }

    //into attack mode 

    //break loop
    if(a.y == 1 && a.x ==0){
      break;
    }
    clean();
    
    
    //attackboard();

    if(level1[a.y][a.x] == "1")
    {
      clean();
      attackboard();
      char attackchoic ;
      checkwin(&a.blood,&lv1.blood, &a.attack, &a.defense, &lv1.defense, &lv1.power, attackchoic);
      lv1.blood = 10;
      a.attack = 16;
    }
    if(level1[a.y][a.x] == "2")
    {
      clean();
      attackboard();
      char attackchoic ;
      checkwin(&a.blood,&lv2.blood, &a.attack, &a.defense, &lv2.defense, &lv2.power, attackchoic);
      lv1.blood = 10;
    }

    if(a.blood <0)
    {
      clean();
      cout<<"Game over";
      break;
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