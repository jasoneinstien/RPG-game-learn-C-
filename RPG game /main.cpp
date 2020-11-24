#include <iostream>
#include "movement.h"
#include "maincharacter.h"
#include "story.h"
using namespace std;

void drawboard1();

string level1[100][100]
{
  {"_" , "_" , "_" , "_" , "_"},
  {"|" , " " , " " , " " , "|"},
  {}

};

int main()
{
  maincharacter a;
  a.apparence = 'A';
  a.blood =100;
  cout<<a.apparence;
  //drawboard1();
}

void drawboard1()
{
};