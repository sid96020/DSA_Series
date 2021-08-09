#include<iostream>
using namespace std;
int main(){
  int num;
  cin>>num;
  for(int i=2;i<num/2;i++){
    if(num%i==0){
      cout<<"not prime";
      return 0;
    }
  }
  cout<<"prime number";
  return 0;
}

