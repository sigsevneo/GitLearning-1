#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
int n;
cin>>n;
//this program will calculate the square root of a number and print output with 2 decimals
float q;
q=sqrt(n);
cout<<fixed;
cout<<setprecision(2)<<q<<"\n";
return 0;
}

