#include<iostream>
using namespace std;
int power(int n,int p){
  if(p==0){
    return 1;
  }
  else{
    return n*power(n,p-1);
  }
}
int main(){
  int a=power(2,2);
  cout<<a<<"\n";
  return 0;
}