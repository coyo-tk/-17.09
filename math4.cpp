#include <iostream>
#include <cmath>
using namespace std;

void stepen (double P) {
  cout<<pow(P,2)<<endl;
  cout<<pow(P,3)<<endl;
  cout<<pow(P,4)<<endl;
  cout<<pow(P,5)<<endl;
}

int main() {
  double p=3.14;
  stepen(p);
}