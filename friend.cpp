#include<iostream>
using namespace std;
class base
{
public:
int a;
int b;
base (int i,int j)
{
a=i;
b=j;
}
friend class derived;
};


class derived
{
public:
int min(base x);
};

int derived::min(base x)
{
return x.a < x.b ? x.a : x.b;

}

int main()
{
base obj(10,20);

derived d;
cout<<d.min(obj)<<endl;
return 0;
}
