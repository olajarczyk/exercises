// kalkulator.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int dodawanie(int a, int b)
{
	int wynik = 0;

	wynik = a + b;

	cout << "Wynik dodawania:" << wynik << endl;
	return wynik;

}

int odejmowanie(int a, int b)
{
	int wynik = 0;

	wynik = a - b;
	cout << "Wynik odejmowania:" << wynik << endl;

	return wynik;
}

int mnozenie(int a, int b)
{
	int wynik = 0;

	wynik = a * b;

	cout << "Wynik mnozenia:" << wynik << endl;

	return wynik;
}

int dzielenie(int a, int b)
{
	if (b != 0)
	{
		int wynik = 0;
		wynik = a / b;
		cout << "Wynik dzielenia:" << wynik << endl;
		return wynik;
	}

	else
	{
		cout << "Nie dzielimy przez zero!" << endl;
	}

}

double potegowanie(double podstawa, double potega)
{
	double wynik = 1;
	
	for (int i = 0; i < potega; i++)
	{
		wynik = wynik * podstawa;
	}
	cout << "Wynik potegowania: " << wynik << endl;
	return wynik;
}

int pierwiastkowanie(int liczba)
{
	int wynik = 0;
	wynik = sqrt(liczba);
	cout << "Wynik pierwiastkowania:" << wynik << endl;
	return wynik;
}



int main()
{
	int wybor;
	int a, b;
	int podstawa;
	int potega;
	int liczba;
	cout << "---------------Kalkulator konsolowy------------------" << endl;
	cout << "--------------------Menu głowne-----------------------" << endl;
	cout << "1.DODAWANIE" << endl;
	cout << "2.ODEJMOWANIE" << endl;
	cout << "3.MNOZENIE" <<endl;
	cout << "4.DZIELENIE" << endl;
	cout << "5.PIERWIASTKOWANIE" << endl;
	cout << "6.POTEGOWANIE" << endl;
	cout << "Wybierz numer z Menu: " << endl;
	cin >> wybor;
	if (wybor > 0 && wybor <= 4) {
		cout << "Podaj pierwsza liczbe:" << endl;
		cin >> a;
		cout << "Podaj druga liczbe:" << endl;
		cin >> b;
	}
	if (wybor == 6)
	{
		
		cout << "Podaj podstawe: " << endl;
		cin >> podstawa;
		cout << "Podaj potege:" << endl;
		cin >> potega;
	}
	if (wybor == 5)
	{
		cout << "Podaj liczbe do pierwiastkowania:" << endl;
		cin >> liczba;
	}

	switch (wybor)
	{
	case 1:
	{
		dodawanie(a, b);
		break;
	}

	case 2:
	{
		odejmowanie(a, b);
		break;
	}

	case 3:
	{
		mnozenie(a, b);
		break;
	}

	case 4:
	{
		dzielenie(a, b);
		break;
	}
	case 5:
	{
		pierwiastkowanie(liczba);
		break;
	}
	case 6:
	{
		potegowanie(podstawa, potega );
		break;

	}

	default:
	{
		cout << "Nie ma takiej pozycji w Menu" << endl;
	}

	

	}

		 
system("pause");



    return 0;
}

