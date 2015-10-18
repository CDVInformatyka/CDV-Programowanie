#include "funkcje.h"

int main() {
	SetConsoleTitleA("Zadanie 4");
	cout << "Jeden algorytm, obliczanie sumy,sumy kwadratow i srednia arytmetyczna\n\n";
	system("pause");
	system("cls");
	int n,silnia;
	bool bezpiecznik=false;
	while (bezpiecznik==false){
		cout<<"Podaj liczbê: ";
		cin>>n;
		if (!cin){
			cin.clear();
			cin.sync();
		} else {
			typ=true;
		}
	}
	cout<<n<<"!="<<silniarekurencyjna(n)<<endl;
	system("pause");
	return 0;
}
