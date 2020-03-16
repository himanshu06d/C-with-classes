#include<iostream>
using namespace std;
int main()
{
	float amt,creditamt,debitamt;
	char ch;
	cout<<"Enter initial amount\n";
	cin>>amt;
	cout<<"Enter\nC for credit\nD for debit\nB for balance\n";
	cin>>ch;
	switch(ch)
	{
		case 'C':
			cout<<"Enter credit amount\n";
			cin>>creditamt;
			amt=amt+creditamt;
			cout<<"New Amount= "<<amt;
			break;
		case 'D':
			cout<<"Enter debit amount\n";
			cin>>debitamt;
			if(amt>=debitamt)
			{
				amt=amt-debitamt;
				cout<<"New Amount= "<<amt;
			}
			else cout<<"Insufficient Amount";
			break;
		case 'B':
			cout<<"Amount in your account = "<<amt;
			break;
		default://statement
			cout<<"INVALID INPUT!!!!";
	}
}//end programme okay

		
