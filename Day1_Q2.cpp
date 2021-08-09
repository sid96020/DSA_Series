#include<iostream>
using namespace std;
int main(){
  int num;
  cin>>num;
  if(num>10 && num<90 ){
    cout<<"number lies between 10 and 90";
  }
  else{
    cout<<"number not lies between 10 and 90";
  }
  return 0;
}