#include<iostream>
using namespace std;
int main()//main added
{
	inta,b=20,c=50;
	int *p,*q,*r; //pointer declaration
	p=&a;//p defined
	q=&b;
	r=&c;
	*p=*q+*r;
	cout<<"Add"<<*p; //result out
}
