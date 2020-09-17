#include <iostream>
#include <cmath>
using namespace std;

double plow (double R) 
{
return 3,14*pow(R,2);
} 
double per (double R) 
{
return (2*3,14*R);
} 

int main() {
  int R;
  cout<<"Введите R= ";
  cin>>R;
  cout<<"Площадь= "<<plow(R)<<" "<<"Периметр= "<<per(R);

}