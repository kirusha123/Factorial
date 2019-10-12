#include "pch.h"
#include "Fuctorial.h"
//#include "Const and types.cpp"
#include "memory.h"


Fuctorial::Fuctorial()
{
}

Fuctorial::Fuctorial(int a_number)
	:number(a_number)
{
	//memcpy(a_Mass, Mass, sizeof a_Mass);
	calculating_fuct();
}

Fuctorial::~Fuctorial()
{
}

void Fuctorial::calculating_fuct()
{
	double ost;
	Mass[0] = 1;
	for (int i = 1; i <= number; i++)
	{
		ost = 0;

		for (int j = 0; j < quantity; j++)
		{
			Mass[j] = Mass[j] * i + ost;
			ost = 0;
			if (Mass[j] > 10)
			{

				ost += Mass[j] / 10;
				Mass[j] %= 10;
			}
		}
	}
}

void Fuctorial::set_number(int num)
{
	number = num;
}

int Fuctorial::get_number()
{
	return number;
}

int Fuctorial::get_solution()
{
	return* Mass;
}

void Fuctorial::print_Console_solution()
{ 
	int count = 0;
	int i = (quantity - 1);
	while (Mass[i] == 0)
	{
		i--;
	}
	cout << endl << endl;
	for (int j = i; j >= 0; j--)
	{
		cout << Mass[j];
		count++;
	}
	cout << endl << endl << "Number of digits = " << count;
}