#include <iostream>
using namespace std;


void attack(int a , int b){
  cout<<a - b;
}

void attackboard()
{
  cout<<"### A ### vs ### 1 ###"<<endl;
  for(int i = 0; i<4 ; i++){
    cout<<endl;
  }
  
  cout<<"A_________________1"<<endl;

  cout<<"1.attack"<<endl<<"2.defense"<<endl;
}