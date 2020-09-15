

#include<fstream>
#include<conio.h>
#include<string>
#include<iomanip>
#include<iostream>
#include<stdio.h>

using namespace std;
class Bus
{
    int busNumber;
    char source[30];
    char destination[30];
    char time[30];
    int seat[32],seat_num;
   
    public:
    void add()
    {
        cout<<"\nEnter the Bus Number: ";
        cin>>busNumber;
        cout<<"\nEnter the Source: ";
        cin.ignore();
        cin>>source;
        cout<<"\nEnter the Destination: ";
        cin.ignore();
        cin>>destination;
        cout<<"\nEnter the Time: ";
        cin.ignore();
        cin>>time;
        cout<<"\t\t\n\nAdded Successfully........";
    }
    void show()
    {
        cout<<"\nBus Number: "<<busNumber;
        cout<<"\nSource: "<<source;
        cout<<"\nDestination: "<<destination;
        cout<<"\nTime: "<<time;
    }
    void modify()
    {
        cout<<"\nBus Number: "<<busNumber;
        cout<<"\nModify Source: ";
        cin.ignore();
        cin>>source;
        cout<<"\nModify Destination: ";
        cin.ignore();
        cin>>destination;
        cout<<"\nModify Time: ";
        cin.ignore();
        cin>>time;
    }
    int getBusNumber()
    {
        return busNumber;
    }
    char* getSource()
    {
        return source;
    }
    char* getDestination()
    {
        return destination;
    }
    char* getTime()
    {
        return time;
    }
    void report()
    {
        cout<<busNumber<<setw(10)<<source<<setw(20)<<destination<<setw(20)<<time<<endl;
    }
   
};
fstream fp;
Bus b;
void save()
{
   
  int option;
  fp.open("bus.dat",ios::out|ios::app);
    do
    {
    b.add();
      fp.write((char*)&b,sizeof(Bus));
      cout<<"\nPress 1 to add more passengers.";
        cout<<"\nPress 2 to return to main menu.\n";
        cout<<"Option: ";
        cin>>option;
     }while(option == 1);
     
     fp.close();
}
void display_add(int busNumber)
{
         
          cout<<"\n DETAILS\n";
          int check=0;
          fp.open("bus.dat",ios::in);
          while(fp.read((char*)&b,sizeof(Bus)))
          {
                    if(b.getBusNumber()==busNumber)
                    {
                               b.show();
                              check=1;
                    }
          }
          fp.close();
          if(check==0)
          cout<<"\n\n does not exist";
        getch();
}

//test
void allotment()
{
    int seat[32],seat_num;
   	int name;
   	int i;
   	int busNumber;
   	top:
    	cout<<"ENter bus no. ";
    	cin>>busNumber;
    cout<<"Seat number ";
    cin>>seat_num;
    if (seat_num>32)
    {
    	cout<<"The are only 32 seats in bus";
    	getch();
	}
	else
	{
		cout<<"Enter passenger name ";
		cin>>name;
		fp.close();
		getch();
	}
	
}    
//test

void modify()
{
         
          int busNumber;
          int found=0;
          cout<<"\n\n\tMODIFY  RECORD";
          cout<<"\n\n\tEnter The bus number: ";
          cin>>busNumber;
          fp.open("bus.dat",ios::in|ios::out);
          while(fp.read((char*)&b,sizeof(Bus)) && found==0)
          {
                    if(b.getBusNumber()==busNumber)
                    {
                               b.show();
                               cout<<"\nEnter  new information"<<endl;
                               b.modify();
                               int pos=-1*sizeof(b);
                               fp.seekp(pos,ios::cur);
                               fp.write((char*)&b,sizeof(Bus));
                               cout<<"\n\n\t Record Updated Successfully...";
                               found=1;
                    }
          }
          fp.close();
          if(found==0)
                    cout<<"\n\n Record Not Found ";
          getch();
}


void delete1()
{
 ifstream fin("bus.dat",ios::in|ios::binary);
 ofstream fout("temp.dat",ios::out|ios::binary);
 if(!fin||!fout)
    cout<<"\nFile server not ready or student database missing  ";
 else
 {
  Bus ob;
  int r,fl=0;
  cout<<"\nEnter bus no to be deleted : ";
  cin>>r;
  while(fin.read((char*)&ob,sizeof(ob)))
  {
   if(ob.getBusNumber()==r)
   {
    fl=1;
   }
   else
   {
    fout.write((char*)&ob,sizeof(ob));
   }
  }
  if(fl==1)
  {
   cout<<"\nRecord successfully deleted ";
  }
  else
   cout<<"\nRecord does not exist ";
  fout.close();
  fin.close();
  remove("bus.dat");
  rename("temp.dat","bus.dat");
 }
}
 
void display_all()
{
             
          fp.open("bus.dat",ios::in);
          if(!fp)
          {
                    cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
                    getch();
                    return;
          }
          cout<<"\n\n\t\t LIST\n\n";
          cout<<"==================================================================\n";
          cout<<"\tBus Number."<<setw(10)<<"Source"<<setw(20)<<"Destination"<<setw(20)<<"Time"<<endl;
          cout<<"==================================================================\n";
          while(fp.read((char*)&b,sizeof(Bus)))
          {
                    b.report();
          }
          fp.close();
          getch();
}
void main_menu()
{
int option;
 
do
{
 
           cout<<"\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
           cout<<"\n\t\tPress 1 to Enter Bus Number";
           cout<<"\n\t\tPress 2 to DISPLAY ALL ";
           cout<<"\n\t\tPress 3 to DISPLAY SPECIFIC  RECORD";
           cout<<"\n\t\tPress 4 for seat allotment";
           cout<<"\n\t\tPress 5 to MODIFY  RECORD";
           cout<<"\n\t\tPress 6 to DELETE  RECORD";
           cout<<"\n\t\tPress 7 to Exit";
           cout<<"\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
           cout<<"\n\t\tOption: ";
           cin>>option;
           
           switch(option)
           
          {
              case 1:save();

                             break;
                    case 2: display_all();

                            break;
                    case 3:
                              int busNumber;
                               
                       cout<<"\n\n\tPlease Enter Bus Number: ";
                              cin>>busNumber;
                              display_add(busNumber);
                              break;
                    case 4:allotment();
                    
                    		break;
                    case 5:modify();

                           break;
                    case 6: delete1();

                           break;
                    case 7: exit(0);
        break;
                    default:cout<<"\a";break;
          }
}while(option!=7);

}
int main(int argc, char *argv[])
{

main_menu();
return 0;
}


