#include<iostream>
using namespace std;
int main()
{
	float frh,cel;
	cout<<"\n\n convert temperature from celcius to fahrenheit :- \n ";
	cout<<"---------------------------------------------------\n";
	cout<<"Input the temp. in celcius :-\n ";
	cin>>cel;
	frh= (cel * 9.0)/5.0+32;
	cout<<" The temperature in celcius    :"<<cel<<endl;
	cout<<"The temperature in fahrenheit  : "<<frh<<endl;
	cout<<endl;
	return 0;
}

