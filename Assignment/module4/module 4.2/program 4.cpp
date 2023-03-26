# include <iostream>
using namespace std;
class cal
{
	int an;
public :
	int add(int a, int b)
	{
		an=a+b;
		return an;
	}	
	int sub(int a, int b)
	{
		an=a-b;
		return an;
	}
	int mul(int a, int b)
	{
		an=a*b;
		return an;
	}
	int div(int a, int b)
	{
		an=a/b;
		return an;
	}	
}cl;
int main() 
{
  	int op;
  	int num1, num2;
  	cout<< "Enter two operands: ";
  	cin >> num1 >> num2;
  	cout<<"\n1.Addition\n2.subtraction\n3.multiplication\n4.divition\n";
	cout<<"\nEnter Your Choice :";
	cin>>op;
  	switch(op) 
	{

    	case 1:
      		cout << "\nAddition is : "<<cl.add(num1,num2); 
      		break;

    	case 2:
      		cout << "\nsubtraction is : "<<cl.sub(num1,num2); 
      		break;

    	case 3:
      		cout << "\nmultiplication is : "<<cl.mul(num1,num2); 
      		break;
    	case 4:
      		cout << "divition is : "<<cl.div(num1,num2); 
      		break;

    	default:
      		cout << "Enter a valid Choice";
      		break;
  	}
  	return 0;
}