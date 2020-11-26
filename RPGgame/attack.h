#include <iostream>
using namespace std;


void attack(int a , int b){
  cout<<a - b;
}

void cleanattack();
void attackboard()
{
  cout<<"### A ### vs ### 1 ###"<<endl;
  for(int i = 0; i<4 ; i++){
    cout<<endl;
  }
  
  cout<<"A_________________1"<<endl;

  cout<<"1.attack"<<endl<<"2.defense"<<endl;
}

 void checkwin(int*hero , int*villain , int*heroattack,int*herodefense , int *villaindefense , int*villainattack , char function)
{
  while(*hero>0 && *villain >0)
  {
    if(function == '1')
    {
      *villain =*villain - *heroattack;
    }
    else if(function == '2')
    {
      *hero += *herodefense;
    };

    *hero -= *villainattack;

    cin>>function;
    cleanattack();
    attackboard();
    cout<<*hero<<"        "<<*villain<<endl;
  }
}
void cleanattack()
{
  for(int i= 0 ; i<33;i++){
    cout<<endl;
  }
}