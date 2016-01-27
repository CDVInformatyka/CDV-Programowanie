/*
 *  Podstawowe biblioteki
 */

#if defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(__TOS_WIN__)
#include <windows.h>
inline void delay(unsigned long ms)
{
	Sleep(ms);
}
#else
#include <unistd.h>
inline void delay(unsigned long ms)
{
	usleep(ms * 1000);
}
#endif

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

/*
 *  Podstawowe funkcje
 */

void pause(string text = "") {
	if (text == "") {
		cout << "Naci�nij dowolny klawisz, by kontynuowa�...";
	}
	else {
		cout << text;
	}
	cin.clear(); cin.sync(); cin.get();
//	system("pause");
}

void cls() {
	system("cls");
}

int walidacja() {
	int x;
	while (!(cin >> x)) { cin.clear(); cin.sync(); }
	return x;
}

int random(int ileliczb = 2147483647, int plus = 0) {
	return rand() % ileliczb + plus;
}

void lotto() {
	cout << "    __    ____  ________________ " << endl;
	delay(500);
	cout << "   / /   / __ \\/_  __/_  __/ __ \\" << endl;
	delay(500);
	cout << "  / /   / / / / / /   / / / / / /" << endl;
	delay(500);
	cout << " / /___/ /_/ / / /   / / / /_/ / " << endl;
	delay(500);
	cout << "/_____/\\____/ /_/   /_/  \\____/  " << endl << endl;
	delay(1000);
	pause();
	cls();
}

void opis();

void menu(int i=0) {
	if(i==0)
	{
		lotto();
	}
	cout << "Wybierz opcj�:" << endl;
	cout << "1. Opis gry" << endl;
	cout << "2. Rozpocznij gr�" << endl;
	int opcja;
	opcja = walidacja();
	switch (opcja) {
	case 1: opis(); break;
	case 2: break;
	default: cout << "Nast�pi�o zwolnienie blokady!" << endl; menu();
	}
}

/*
 *
 */

void opis() {
	cls();
	cout << "Program na początku pyta użytkownika o 6 liczb z zakresu od 1 do 49" << endl;
	cout << "Następnie program wygeneruje 6 kolejny liczb i wyświetli wynik." << endl;
	cout << "Oba typowania zostaną wyświetlone i porównane ze sobą." << endl;
	cout << "W przypadku udanego typowania, można otrzymać nagrodę!" << endl;
	cout << "Trójka - nagroda 2 złote" << endl;
	cout << "Czwórka - 10 złotych" << endl;
	cout << "Piątka - 100 złotych" << endl;
	cout << "Szóstka - 100000 złotych" << endl;
	pause();
	cls();
	menu(1);
}
