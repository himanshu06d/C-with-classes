#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char
		u[200]="easy@gmail.com",p[200]="ani@789";
	char u1[200],p1[200];
	cout<<"Enter username\n";
	cin>>u1;
	cout<<"Enter password\n";
	cin>>p1;
	if(strcmp(u,u1)==0 && strcmp(p,p1)==0)
		cout<<"Login successful";
	else
		cout<<"Wrong username or password";
}
