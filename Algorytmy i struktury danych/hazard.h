/*
 *  Podstawowe biblioteki
 */

#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

/*
 *  Podstawowe funkcje
 */

inline void delay(unsigned long ms)
{
	Sleep(ms);
}

void pause(string text = "") {
	if (text == "") {
		cout << "Naciœnij dowolny klawisz, by kontynuowaæ...";
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
	cout << "Wybierz opcjê:" << endl;
	cout << "1. Opis gry" << endl;
	cout << "2. Rozpocznij grê" << endl;
	int opcja;
	opcja = walidacja();
	switch (opcja) {
	case 1: opis(); break;
	case 2: break;
	default: cout << "Nast¹pi³o zwolnienie blokady!" << endl; menu();
	}
}

/*
 *  Gra
 */

void opis() {
	cls();
	cout << "Program na poczÄ…tku pyta uÅ¼ytkownika o 6 liczb z zakresu od 1 do 49" << endl;
	cout << "NastÄ™pnie program wygeneruje 6 kolejny liczb i wyÅ›wietli wynik." << endl;
	cout << "Oba typowania zostanÄ… wyÅ›wietlone i porÃ³wnane ze sobÄ…." << endl;
	cout << "W przypadku udanego typowania, moÅ¼na otrzymaÄ‡ nagrodÄ™!" << endl;
	cout << "TrÃ³jka - nagroda 2 zÅ‚ote" << endl;
	cout << "CzwÃ³rka - 10 zÅ‚otych" << endl;
	cout << "PiÄ…tka - 100 zÅ‚otych" << endl;
	cout << "SzÃ³stka - 100000 zÅ‚otych" << endl;
	pause();
	cls();
	menu(1);
}

bool kontynuacja(){
    cout<<"Czy chcesz kontynuować grę?"<<endl;
    cout<<"Naciśnij ENTER, aby kontynuować lub ESC, aby zakończyć grę!"<<endl;
    bool powtorka=TRUE;
    unsigned char znak;
    int kod;
    while (powtorka){
        znak = getch();
        kod = static_cast < int >( znak );
        if( kod == 13 ){
            powtorka=FALSE;
            return FALSE;
        }
        if( kod == 27 ){
            powtorka=FALSE;
            return TRUE;
        }
    }
}
