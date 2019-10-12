// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <Stack>
using namespace std;

struct Word {
	Word(int a_Length, string a_word)
		: Length(a_Length)
		, word(a_word)
	{
	}

	string word;
	int Length;
};

typedef stack<Word> WordsStack;
WordsStack Words;
Word Mass(0," ");
/*
void Open_File(ifstream f,string Place)
{
	f.open(Place);
	if (f.is_open())
		cout << "Completed" << endl;
	else
		cout << "Doesn't OPEN" << endl;
}

bool IS_Empty(ifstream f) //не работает 
{
	if (f.is_open())
	{
		if (f.eof())
			return true;
		return false;
	}
	cout << "It closed" << endl;
	return true;
}

string Finding_Longest_Word(ifstream f, WordsDeque S)
{
	string s,smax;
	int lenth = 0;
	int count = 0;
	while (!f.eof())
	{
		getline(f,s,' ');
		
		
	}

	return smax;


}

*/


int main()
{
	int maxLength = 0;
	bool fo1,fo2;
	string s ,s2,word;
	ifstream f1;
	ifstream f2;
	f1.open("A:\visual dumps\F1.odt");
	f2.open("A:\visual dumps\F2.odt");

	fo1 = f1.eof();
	fo2 = f2.eof();
	if ((!fo1)&&(!fo2))
	while (!f1.eof())
	{
		getline(f1,s,' ');
		
		do
		{
			getline(f2, s2, ' ');
		} while ((!f2.eof()) && (s2 != s));
			

		if (s == s2)
			Words.push(Word(s.length(),s));

	}

	while (!Words.empty())
	{
		Mass = Words.top();
		if (maxLength < Mass.Length)
		{
			maxLength = Mass.Length;
			word = Mass.word;
		}
		//maxLenght = (maxLenght > a.Lenght) ? maxLenght : a.Lenght;

		Words.pop();
	}
    
	cout << word << endl;
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
