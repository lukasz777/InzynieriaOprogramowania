#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
#include <fstream>
#include <cstring>
#include <windows.h>

// dla uproszczenia bez bazy danych, liczba zgloszen:
int liczba_zgloszen = 0;

void DodajZgloszenie(string klient)
{
	system("cls");
	cout << "NOWE ZGLOSZENIE\n\n";
	cout << "Marka: ";
	string marka;
	cin.ignore(999, '\n');
	getline(cin, marka);
	cout << "Model: ";
	string model;
	getline(cin, model);
	cout << "Opis problemu: ";
	char opis[256];
	cin.getline(opis, 255);
	cout << "Podaj szczegolowe dane: \n";
	cout << "Liczba drzwi: ";
	int ld = 0;
	cin >> ld;
	cout << "Moc: ";
	int moc;
	cin >> moc;

	liczba_zgloszen++;
	string nr = "zgloszenie" + to_string(liczba_zgloszen) + ".txt";

	fstream fout;
	fout.open(nr, ios::out);
	fout << "Klient: " << klient << endl;
	fout << "Marka: " << marka << endl;
	fout << "Model: " << model << endl;
	fout << "Opis: " << opis << endl;
	fout << "Liczba drzwi: " << ld << endl;
	fout << "Moc: " << moc << endl;

	fout.close();

	system("cls");
	cout << "DODANO ZGLOSZENIE\n";
	Sleep(2000);
}

void PanelUzytkownika(string klient)
{
	while (true)
	{
		system("cls");
		cout << "[1] Dodaj zgloszenie\n[2] Wyloguj\n\n";
		int w = 0;
		cin >> w;
		switch (w)
		{
		case 1:
			DodajZgloszenie(klient);
			break;
		case 2:
			return;
		}
	}
}

bool SprawdzLogin(string login)
{
	ifstream fin;
	fin.open("loginy.txt");
	if (!fin.good())
	{
		cout << "Blad przy wczytaniu bazy danych.\n";
		getchar(); getchar(); exit(0);
	}

	char napis[50];
	while (!fin.eof())
	{
		fin.getline(napis, 50);
		if (strcmp(login.c_str(), napis) == 0)
		{
			fin.close();
			return true;
		}
	}

	fin.close();
	return false;
}

bool SprawdzHaslo(string login, string haslo)
{
	ifstream fin;
	fin.open("hasla.txt");
	if (!fin.good())
	{
		cout << "Blad przy wczytaniu bazy danych.\n";
		getchar(); getchar(); exit(0);
	}

	int i = 0;
	char napis[50];
	while (!fin.eof())
	{
		fin.getline(napis, 50);
		string samlogin;
		for (; i < 50; i++)
		{
			if (napis[i] != '-')
			{
				samlogin += napis[i];
			}
			else
			{
				break;
			}
		}
		if (samlogin == login)
		{
			string samohaslo;
			i++;
			while (napis[i] != '#')
			{
				samohaslo += napis[i];
				i++;
			}

			fin.close();

			if (samohaslo == haslo)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}

	return false;
}

void Logowanie()
{
	system("cls");
	cout << "Login: ";
	string login;
	cin.ignore(999, '\n');
	getline(cin, login);
	if (SprawdzLogin(login))
	{
		cout << "Haslo: ";
		string haslo;
		getline(cin, haslo);
		if (SprawdzHaslo(login, haslo))
		{
			PanelUzytkownika(login);
		}
		else
		{
			cout << "Bledne haslo\n";
			Sleep(2000);
			return;
		}
	}
	else
	{
		cout << "Bledny login\n";
		Sleep(2000);
		return;
	}
}

int main()
{
	while (true)
	{
		system("cls");
		cout << "[1] Logowanie\n[2] Wyjscie\n\n";
		int w = 0;
		cin >> w;
		switch (w)
		{
		case 1:
			Logowanie();
			break;
		case 2:
			exit(0);
		}
	}
}