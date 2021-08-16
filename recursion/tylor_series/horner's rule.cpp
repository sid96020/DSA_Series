

#include <iostream>
using namespace std;
double honer_rule(int x,int n){
  static double s=1;
  if(n==0){
    return s;
  }
  else{
    s=1+x*s/n;
    return honer_rule(x,n-1);
  }
}
int main(){
  honer_rule(5,15);
  return 0;
}                                               )