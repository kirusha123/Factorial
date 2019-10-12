// Задача 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <stack>

using namespace std;


bool is_polindrom(long int c)
{
	const int quant = 10;
	int a[quant] = { 0 };
	int count = 0, i = 0;
	bool f =true;

	while (c > 0)
	{
		a[count] = c % 10;
		c /= 10;
		count++;
	}

	while ((f)&&(i<=count/2))
	{
		if (a[i] != a[(count - 1) - i])
			f = false;
		i++;
	}
	if (!f)
		return false;
	else
		return true;
}

int main()
{	
	typedef stack<int> PointsStack;
	PointsStack Points, Answers;

	const int length = 100;
	bool test;
	//int temp;

	for (int i = 0; i < length; i++)
	{
		if (is_polindrom(i))
			Points.push(i);
	}

	while (!Points.empty())
	{
		int temp;
		temp = Points.top();
		if (is_polindrom(temp*temp))
			Answers.push(temp);
		Points.pop();
	}

	while (!Answers.empty())
	{
		cout << Answers.top() << endl;
		Answers.pop();
	}

	if ((Points.empty()) && (Answers.empty()))
		cout << "Exellent" << endl;
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
