#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	intr, c; //r = rows, c = colums;
	bool coaster = false;
	do
	{
		cout << "how many rows:"; 
		cin >> r;
		cout << "how many columns:";
		cin >> c;
		{
			for (int a = 0; a < r; a++)
			{
				cout << "\n*";
				for( int b = 1; b, c; b++)
				{
					cout << "*";
				}
			}
		}
		cout << "\n\n";
	}while (!coaster);
	
	return 0;
}
