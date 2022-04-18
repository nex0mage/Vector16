#include <vector>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	vector <int> weak = { 1, 3, 12, 124, 19, 20, 13, 11,-1000, 1000, -7, 97, 101, 17, 5, 7, 13, 11, 10 };
	int x;
	cout << "Введите число, на которое поменяются все простые числа: ";
	cin >> x;
	cout << "Необработанный вариант вектора: ";
	for (int i = 0; i < weak.size(); i++)
	{
		cout << weak.at(i) << " ";
	}
	cout << endl;

	cout << "Обработанный вариант вектора: ";
	for (int i = 0; i < weak.size(); i++)
	{
		if ((weak.at(i) == 1) || (weak.at(i) == 2) || (weak.at(i) == 3) || (weak.at(i) == 5) || (weak.at(i) == 7) || (weak.at(i) == 11) || (weak.at(i) == 13) || (weak.at(i) == 17) || (weak.at(i) == 19))
		{
		weak.at(i) = x;
		cout << weak.at(i) << " ";
		}
		else if ((weak.at(i) % 2 == 0) || (weak.at(i) % 3 != 0) || (weak.at(i) % 5 != 0) || (weak.at(i) % 7 != 0) || (weak.at(i) % 11 == 0))
		{
			cout << weak.at(i) << " ";
		}

		
	}
	cout << endl;



}
