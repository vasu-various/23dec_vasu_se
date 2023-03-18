/*bank account*/

# include <iostream>
using namespace std;
class bank
{
	string nd, ta;
	long an, ba, d, w;
public :
	
	int av()
	{
		cout<<"Enter your name :";
		cin>>nd;
		cout<<"account no :";
		cin>>an;
		cout<<"Enter a Type of account :";
		cin>>ta;
		cout<<"Enter balance amount :";
		cin>>ba;
		return 0;
	}
	int da()
	{
		cout<<"\nEnter a amount of deposite : ";
		cin>>d;
		ba=ba+d;
		cout<<"\nYour bank balance is : "<<ba;
		return 0;
	}
	int wa()
	{
		cout<<"\nYour bank balance is : "<<ba;
		cout<<"\nEnter a amount of withdraw : ";
		cin>>w;
		ba=ba-w;
		cout<<"\nYour bank balance is : "<<ba;
		return 0;
	}
	int nb()
	{
		cout<<"\nYour name is : "<<nd;
		cout<<"\nYour bank balance is : "<<ba;
		return 0;
	}
	
}b;
int main()
{
	b.av();
	b.da();
	b.wa();
	b.nb();
	return 0;
}
