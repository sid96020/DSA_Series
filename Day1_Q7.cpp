#include<iostream>
using namespace std;
int main(){
  int num;
  cin>>num;
  int sum=0;
  for(int i=1;i<num;i++){
    if(num%i==0){
      sum=sum+i;
    }
  }
  if(sum==num){
    cout<<"perfect number";
  }
  return 0;

}