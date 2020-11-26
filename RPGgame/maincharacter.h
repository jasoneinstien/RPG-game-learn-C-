#include <iostream>
using namespace std;
void cleanmaincharacter();
class maincharacter
{
  public:

  int blood;
  char apparence;
  int x;
  int y;
  int attack;
  int defense;
  int exp;
  int level;

  private:
};

void bag()
{

    cleanmaincharacter();
    cout<<"1.Sword"<<endl;
    cout<<"2.Defence"<<endl;
    cout<<"3.level"<<endl;
    cout<<"if ok click ok"<<endl;
    string a= " ";
    cin>>a;
}


void cleanmaincharacter()
{
  for(int i= 0 ; i<33;i++){
    cout<<endl;
  }
}


