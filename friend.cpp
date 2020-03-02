#include<iostream>
using namespace std;
class base//base defined
{
public:
int a;
int b;
base (int i,int j)
{
a=i;
b=j;
}
friend class derived;//friend function defined
};


class derived//class defined
{
public:
int min(base x);
};

int derived::min(base x)
{
return x.a < x.b ? x.a : x.b;

}

int main()//main added
{
base obj(10,20);

derived d;
cout<<d.min(obj)<<endl;
return 0;
}//end of programme
