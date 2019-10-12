#include "pch.h"
#include <iostream>

using namespace std;

class TEq0
{
public:
	 //TEq0() {}

	 //~TEq0(){}

	virtual void Input()
	{
		cout << "ВВедите коэф перед x^0" << endl;
		cin >> a;
	}

	virtual void Input(double c)
	{
		a = c;
	}

	virtual void Solve()
	{
		if (a == 0)
			cout << "EQ Right" << endl;
		else
			cout << "EQ Flase" << endl;
	}

	double a;
};

class TEq1:public TEq0
{
public:
	//virtual void Init() {}

	//virtual void () {}

	virtual void Input()
	{
		TEq0::Input();
		cout << "ВВедите коэф перед x^1" << endl;
		cin >> b;
	}

	void Solve()
	{
		if (b == 0)
			TEq0::Solve();
		else
		{
			cout << "X = " <<( -(TEq0::a) / b )<< endl;
		}
	}

	double b;
};

class TEq2:TEq1
{
public:
	float c,D;

    //TEq2() {}

	//~TEq2() {}

	void Input()
	{
		TEq1::Input();
		cout << "ВВедите коэф перед x^2" << endl;
		cin >> c;
	}

	void Solve()
	{
		if (c == 0)
			TEq1::Solve();
		if (a == 0)
		{
			cout << "X1 = 0" << endl;
			cout << "X2 = " << (-b / c) << endl;
		}
		D = b * b - 4 * a*c;
		if (D < 0)
			cout << "NO Real Solution" << endl;
		if (D == 0)
			cout << "X1=X2= " << -b / (2 * a) << endl;
		
		if ((D > 0)&&(a!=0))
		{
			cout << "X1 = " << ((-b + sqrt(D)) / 2 * a) << endl;
			cout << "X2 = " << ((-b - sqrt(D)) / 2 * a) << endl;
		}
		

	}

};

int main()
{
	setlocale(LC_ALL, "rus");

	TEq2 First_TEQ;
	TEq2* Ptr_First_EQ;
	
	Ptr_First_EQ = &First_TEQ;
	
	Ptr_First_EQ->Input();
	Ptr_First_EQ->Solve();

	

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
