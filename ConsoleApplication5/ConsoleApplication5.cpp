#include <iostream> 
#include <string> 
#include <windows.h> 
using namespace std;
void Hello(string a, int b)
{
	cout << "Привет " << a << " " << b << endl;
}
void Summa(int a, int b)
{
	cout << " Процедура ";
	cout << " Сумма = " << a + b << endl;
}
int SUM(int a, int b)
{
	return a + b;
}
void calculator(string a, int b)
{
	cout << a << " \t " << b;
}
int RAZ(int a, int b)
{
	return a - b;
}
int UMNOZ(int a, int b)
{
	return a * b;
}
int DEL(int a, int b)
{
	return a / b;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << SUM(26, 13);
	cout << " Функц сумма = " << SUM(26, 13) << endl;
	calculator(" Сумма ", SUM(18, 25));
	cout << " Функция разность = " << RAZ(26, 13) << endl;
	cout << " Функция произведение = " << UMNOZ(26, 13) << endl;
	cout << " Функция деления = " << DEL(26, 13) << endl;
}
