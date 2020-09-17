#include <iostream>
#include <cmath>
using namespace std;

void summ_sub_mult_div(double x, double y) {
  cout<<x+y;
  cout<<x-y;
  cout<<x*y;
  cout<<x/y;
}

int main() {
  int x,y;
  cout<<"Введите x,y ";
  cin>>x>>y;
  summ_sub_mult_div(x,y);
}