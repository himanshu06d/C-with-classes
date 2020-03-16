#include <iostream>
using namespace std;
int main()
{
int x[10], n, i;//array defined
cout<<"Enter the number: ";
cin>>n;
for(i=0; n>0; i++)//algo
{
x[i]=n%2;
n= n/2;
}
cout<<"Binary of the given number= "<<endl;
for(i=i-1 ;i>=0 ;i--)
{
cout<<x[i];
}//end program


