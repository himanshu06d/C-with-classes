#include<iostream>
using namespace std;
int main()
{
	inta,b=20,c=50;
	int *p,*q,*r;
	p=&a;
	q=&b;
	r=&c;
	*p=*q+*r;
	cout<<"Add"<<*p;
}
