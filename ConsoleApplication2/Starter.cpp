// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Fuctorial.h"


/*void calculatig_fuct(int fuct,int a[])
{
	
	//int a[quantity] = { 0 };
	double ost;
	a[0] = 1;
	for (int i = 1; i <= fuct; i++)
	{
		ost = 0;

		for (int j = 0; j < quantity; j++)
		{
			a[j] = a[j]*i + ost;
			ost = 0;
			if (a[j] > 10)
			{
				ost += a[j] / 10;
				a[j] %= 10;
			}
		}
	}
	
		//return a; 
	
}
*/

int main()
{
	int count = 0, i = quantity-1;
	int Mass[quantity] = {};
	Fuctorial fuct,fuct2(8);
	fuct.set_number(5);
	fuct.calculating_fuct();
	fuct.print_Console_solution();
	fuct2.print_Console_solution();

	/*//Fuct.calculating_fuct(2);
	//int b[quantity] = { 0 };
	//int* Mass = calculatig_fuct(4);
	//calculatig_fuct(4, Mass);
	while (Mass[i]==0)
	{
		i--;
	}
	for ( int j = i; j >= 0; j--)
	{	
			cout << Mass[j];
			count++;		
	}
		
	*/
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
