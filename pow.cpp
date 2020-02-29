#include<iostream>
using namespace std;
int pow(int x,int y)
{
int i,p=1;
for(i=1;i<=y;i++)
{
p=p*x;
}
return p;
}
int main()
{
int c,x,y;
cin>>x>>y;
c=pow(x,y);
cout<<"the ans is ->"<<c;
return 0;
}
