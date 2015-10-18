#include "funkcje.h"
#include <ctime>
#include <time.h>

int main() {
	SetConsoleTitleA("Zadanie 5");
	cout << "Obliczanie zarobku\n\n";
	srand(time(NULL));
	system("pause");
	system("cls");
	int pp,sg,lg,ng=0,nr,pl;
	bool bezpiecznik=false;
	while (bezpiecznik==false){
		cout<<"Podaj stawke godzinowa: ";
		cin>>sg;
		system("cls");
		cout<<"Podaj ilosc godzin przepracowanch: ";
		cin>>lg;
		if(lg>42){
			ng=lg-42;
		}
		if (!cin){
			cout<<"Zle wprowadzono dane!";
			cin.clear();
			cin.sync();
		} else {
			bezpiecznik=true;
		}
		system("cls");
	}
	cout<<"Numer pracownika: "<<rand()<<endl;
	cout<<"Pracownik przepracowal "<<lg<<" godzin i zarobil "<<(lg+ng)*sg<<" PLN."<<endl;
	return 0;
}
