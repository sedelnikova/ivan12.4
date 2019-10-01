// ivan 12.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой 
//находится точка с ненулевыми вещественными координатами (x, y). 
//С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами


#include <iostream>
#include <cmath>
using namespace std;

void Quarter(double x, double y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			cout << "1 кординатная четверть" << endl;
		}
		else
		{
			cout << "4 координатная четверть" << endl;
		}
	}
	else
	{
		if (y > 0)
		{
			cout << "2 координатная четверть" << endl;
		}
		else
		{
			cout << "3 координатная четверть" << endl;
		}
	}


}

int main()
{

	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Введите, пожалуйста, x, y: " << endl;
	cin >> a >> b;
	Quarter(a, b);
	cout << "Введите, пожалуйста, x, y: " << endl;
	cin >> a >> b;
	Quarter(a, b);
	cout << "Введите, пожалуйста, x, y: " << endl;
	cin >> a >> b;
	Quarter(a, b);

	return 0;

}