/*Event Organiser Project*/

# include <iostream>
#include <cmath>
using namespace std;
class event
{
	string e,f;
	float g;
	float tcf,cd,ac;
	int s,m;
	float s1,s2a,s2,tsc, tc,d;
public:
	int input()
	{
		cout<<"Enter a name of event :";
		cin>>e;
		cout<<"Enter Your Full name :";
		cin>>f;
		cout<<"Enter a number of guasts :";
		cin>>g;
		cout<<"Enter a number of minuts :";
		cin>>m;
		cout<<"\n\n----------------------- hi "<<f<<" Your estimet cost---------------------\n";
	}
	int server()
	{
		s=ceil(g/20);
		cout<<"\nNumber of server requeried is :"<<s;
		s1=(m/60)*18.50;
		s2=(m%60)*0.40;
		tsc=s1+s2;
		cout<<"\nCost of one server is : "<<tsc;
		return 0;
	}
	int dcost()
	{
		cd=20.70;
		tcf=g*cd;
		cout<<"\nThe total cost of dinner is : "<<tcf;
		return 0;
	}
	int acost()
	{
		ac=tcf/g;
		cout<<"\nThe Avrage cost of per person : "<<ac;
		return 0;
	}
	int tcost()
	{
		tc=tcf+(tsc*s);
		cout<<"\nThe total cost of event is :"<<tc;
		cout<<"\nPlease deposite a 25% percent of amout for booking";
		d=tc*0.25;
		cout<<"\nThe amout of deposite is : "<<d;
	}
}vasu;
int main()
{
	vasu.input();
	vasu.server();
	vasu.dcost();
	vasu.acost();
	vasu.tcost();
	return 0;
}
