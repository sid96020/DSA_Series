#include <iostream>
using  namespace std;

int main() {
  int num1,num2;
  cin>>num1>>num2;
  while(num1>0 && num2>0){
  if(num1==num2){
    cout<<num1;
    break;
  }
  else if(num1>num2){
    num1=num1-num2;
  }
  else if(num2>num1){
    num2=num2-num1;
  }
  }

  }