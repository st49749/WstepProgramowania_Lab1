#include <iostream>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();

int main()
{
	int a, inaA = 23;
	float b, d;
	double zmiennaD = 3.14;
	char znak = 'c';
	string imie = "Krzysztof", nrAlbumu = "w49749";

	cout << "Hello world\n";

	// task1();
	// task2();
	// task3();
	// task4();
	task5();

	cout << endl << endl;
}

void task1()
{
	// Napisaæ program, który wypisuje na konsole nr albumu studenta 
	// (osoby rozwiazujacej program).
	cout << "w49749" << endl;
}

void task2()
{
	// Napisaæ program, który sprawdza, czy podana liczba ca³kowita,
	// wczytana z klawiatury jest parzysta, czy nieparzysta. (operator %)

	int number;
	cout << "Podaj liczbe: ", cin >> number;

	if (number % 2 == 0)
		cout << "Podana liczba jest parzysta";
	else
		cout << "Podana liczba jest nieparzysta";
}

void task3()
{
	// Napisaæ program, który pozwala u¿ytkownikowi na wprowadzenie dwóch liczb
	// zmiennoprzecinkowych, a nastepnie zwraca informacje, która z wprowadzonych liczb
	// jest liczba wieksza

	float a, b;
	cout << "Podaj pierwsza liczbe: ", cin >> a;
	cout << "Podaj druga liczbe: ", cin >> b;

	if (a < b)
		cout << "Pierwszy numer jest mniejszy ni¿ drugi numer";
	else if (a > b)
		cout << "Pierwszy numer jest wiekszy ni¿ drugi numer";
	else
		cout << "Pierwszy numer równy drugiemu numerowi";
}

void task4()
{
	// Napisaæ program, który pozwala u¿ytkownikowi na wprowadzenie czterech liczb
	// zmiennoprzecinkowych, a nastepnie zwraca œrednia arytmetyczna z wprowadzonych
	// liczb.

	float numbers[4];
	cout << "Podaj 4 numery:" << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << "Podaj numer " << i + 1 << ": ";
		cin >> numbers[i];
	}

	float average = (numbers[0] + numbers[1] + numbers[2] + numbers[3]) / 4;
	cout << "Œrednia podanych liczb to: " << average;
}

void task5()
{
	// Napisaæ prosty kalkulator wykonujacy dzia³anie matematyczne(+, -, / , *) na dwóch
	// liczbach podanych z klawiatury, wykorzystujac instrukcje switch.

	float a, b;
	char operationSign;

	cout << "Podaj pierwsza liczbe: ", cin >> a;
	cout << "Jakie dzia³anie chcesz wykonaæ (+, -, /, *): ", cin >> operationSign;
	cout << "Podaj druga liczbe: ", cin >> b;

	switch (operationSign)
	{
	case '+':
		cout << "Wynik: " << a + b;
		break;

	case '-':
		cout << "Wynik: " << a - b;
		break;

	case '/':
		if (b == 0) {
			cout << "Nie mo¿na dzieliæ przez zero!!";
			return;
		}
		cout << "Wynik: " << a / b;
		break;

	case '*':
		cout << "Wynik: " << a * b;
		break;

	default:
		cout << "Nie rozpoznano dzia³ania do wykonania";
		break;
	}
}