#include <iostream>
#include <cmath>
using namespace std;

double plow (double a, double b) 
{
return (a*b)/2;
} 
double per (double a, double b) 
{
double c=sqrt(a*a-b*b);
return (a+b+c);
} 

int main() {
  int a,b;
  cout<<"Введите a,b";
  cin>>a>>b;
  cout<<"Площадь= "<<plow(a,b)<<"Периметр= "<<per(a,b);

}