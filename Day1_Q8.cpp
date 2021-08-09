#include<iostream>
using namespace std;
int main(){
  int num;
  cin>>num;
  int tmp=num;
  int count=0;
  while(tmp>0){
    tmp=tmp/10;
    count++;
  }
  int tmp1=num;
  int sum=0;
  int n1=1;
  while(tmp1>0){
    int digit=tmp1%10;
    for(int i=0;i<count;i++){
      int n1=n1*digit;
    }
    sum=sum+n1;
    tmp1=tmp1/10;
  }
  if(sum==num){
    cout<<"number is armstrong";
  }
  else{
    cout<<"not armstrong";
  }
  return 0;

}