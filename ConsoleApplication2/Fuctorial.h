#pragma once
#include "Const and types.cpp"

using namespace std;

class Fuctorial
{
public:
	Fuctorial();
	Fuctorial(int a_number);
	~Fuctorial();
	void calculating_fuct();
	void set_number(int number);
	int get_number();
	int get_solution();
	void print_Console_solution();
private:
	TypeofMass Mass[quantity] = {0};
	TypeofNumber number = 0;
};

