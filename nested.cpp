#include<iostream>
using namespace std;//declaration

class base
{
	public:
	class derived
	{
		private:
		int n;
		public:
		void getdata(int a)
		{
			n=a;
		}
		void display()
		{
			cout<<"The value of eneterd number "<<n<<endl;
		}
	};
};//class defined


int main()//main aadded
{
	
	cout<<"Nested class in c++";
	base::derived obj;
	obj.getdata(10);
	obj.display();

return 0;
}//end of programme
