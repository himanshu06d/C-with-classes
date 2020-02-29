#include<iostream>
using namespace std;

class recursion
{
  private:
  int x;
  public:
  recursion(int y)
{
  x=y;
}
int function(int x)
{
  int f;
  if(x==1)
  return 1;
  else
  f=x*function(x-1);
return f;
}
};

int main()
{
  int a,b;
  cout<<"Enter the number"<<endl;
  cin>>a;
  recursion r(a);
  b=r.function(a);
  cout<<"Recursion of a number is "<< b<<endl;
return 0;
}
