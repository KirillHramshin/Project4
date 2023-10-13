#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите целое четырехзначное число: ";
	int a;
	cin >> a;
	int b1 = a / 1000;
	int b2 = (a / 100) % 10;
	int b3 = (a / 10) % 10;
	int b4 = a % 10;	
	if (b1 == b2 || b1 == b3 || b1 == b4 || b2 == b3 || b2 == b4 || b3 == b4)
	{
		cout << "В вашем числе есть одинаковые цифры";
	}
	else
	{
		cout << "В вашем числе нет одинаковых цифр";
	}
}
