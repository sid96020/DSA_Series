#include <iostream>
using namespace std;
int sum(int n){
  if(n==0){
    return n;
  }
  int sum1=sum(n-1)+n;
  return  sum1;
}
int main(){
  cout<<sum(6)<<"\n";
}