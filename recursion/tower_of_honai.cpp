#include<iostream>
using namespace std;
void TOH(int n,int a,int b,int c){
  if(n>0){
    TOH(n-1,a,c,b);
    cout<<"from "<<a<<" to "<< c<<"\n";
    TOH(n-1,b,a,c);
  }
  return;
}
int main(){
  TOH(3,1,2,3);
}
