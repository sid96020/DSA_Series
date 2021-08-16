#include <iostream>
using namespace std;
double tylor_series(int x,int n){
  static int fact=1,pow=1;
  if(n==0){
    return 1;
  }
  else{
    double sum=tylor_series(x,n-1);
    int pow=x*pow;
    int fact=fact*n;
    return sum+pow/fact;

  }
}
int main()
{
  double a=tylor_series(4,3);
  cout<<a;
}