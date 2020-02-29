#include<iostream>
#include<cstring>
#include<string.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"write the string";
getline(cin,str);
cout<<str.capacity()<<" "<<str.length()<<endl;
//str.insert(3," are ");
str.insert(3," area",4);//TO give only three letters from area we have taken 4 because space is also counted
cout<<str<<endl;
cout<<str.capacity()<<" "<<str.length()<<endl;
return 0;
}
