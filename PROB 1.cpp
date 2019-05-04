//Test
#include<conio.h>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	float Hour, BillA, BillB;
	int a;
	
	cout << "Please indicate which package you are using" << endl;
	cout << "1 for A, 2 for B, 3 for C" << endl;
	cin >> a;
	cout << "Indicate your usage in hours" << endl;
	cin >> Hour;
		
	BillA = ( Hour * 20 ) + 995; 
	BillB = ( Hour * 10) + 1495;
	{
	if (a==1)
	
	
	cout << BillA<<"/"<<"month" << endl;
	
	else if (a==2)
	
	cout << BillB<<"/"<<"month" << endl;
	
	else if (a==3)
	
	cout << "1995/month, no additional fees for extra hours" << endl;
	
	else
	
	cout << "Invalid" << endl;
	
	return 0;
	}
}
