#include <iostream>
#include "Windows.h"

int main()
{
    int sw{}; std::cout << "\nselect case: "; std::cin >> sw;
	switch (sw)
	{
	case 1:
		std::cout << "\ndog";
		Sleep(2000); main();
		break;
	case 2:
		std::cout << "\ncat"; Sleep(2000); main();
		break;		
	default:
		std::cout << "\nbad number"; Sleep(1500); main();
		break;
	}
}
