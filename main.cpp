#include <iostream>
using namespace std;
int main()
{
	int sw;
	string a, b, c;
	cout << "Select case: \n1. Poem\n";
	cin >> sw;

	switch (sw)
	{
	case 1:
		system("cls");
		cout << "My name is: ";
		cin >> a;	
		cout << "\nMy lovely color is: ";
		cin >> b;
		cout << "\nMy dream car is: ";
		cin >> c;

		system("cls");
		cout << "My name is: " + a + "\nMy lovely color is: " + b + "\nMy dream car is: " + c + "\n";
		system("pause");
		break;
	}
}
