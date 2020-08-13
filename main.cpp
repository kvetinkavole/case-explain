#include <iostream>
#include "Windows.h"
using namespace std;
int main()
{
	system("cls");
	int sw;
	cout << "select case: ";
	cin >> sw;

	if (sw == 1 or sw == 2)
	{
		switch (sw)
		{
		case 1:
			cout << "dog";
			Sleep(2000);
			main();
			break;
		case 2:
			cout << "cat";
			Sleep(2000);
			main();
			break;
		}
	}	
	else
	{
		cout << "case not exist";
		Sleep(2000);
		main();
	}
}
