// Lab_6_3.cpp
// Козубенко Андрій
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів.
// Варіант 10
// Ітераційний спосіб
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

void CreateArray(int *a, const int size);
void PrintArray(int *a, const int size);
int MinElem(int *a, const int size);

int main()
{
	int n;

	cout << "How many elements should a new array consist of?\n";
	cout << "n = "; cin >> n;

	if (n <= 0)
	{
		std::cerr << "Number of elements in an array should be > 0";
		return -1;
	}

	int *a = new int[n];

	CreateArray(a, n);
	PrintArray(a, n);

	cout << "Minimal element = " << MinElem(a, n) << endl;

	delete[] a;
	return 0;
}

void CreateArray(int *a, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = "; cin >> a[i];
	}
}

void PrintArray(int *a, const int size)
{
	cout << "a = " << "{";

	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << a[i];
		if (i != size - 1)
			cout << ",";
	}

	cout << " }\n";
}

int MinElem(int *a, const int size)
{
	int min = a[0];

	for (int i = 1; i < size; i++)
	{
		if (a[i] < min)
			min = a[i];
	}

	return min;
}