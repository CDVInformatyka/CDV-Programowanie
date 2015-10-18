#include "funkcje.h"

int main() {
	SetConsoleTitleA("Zadanie 1");
	cout << "Algorytm obliczania sumy kolejnych liczb naturalnych.\n\n";
	system("pause");
	system("cls");
	int b;
	bool typ=false;
	while (typ==false){
		cout << "Podaj wartoœæ liczby b: ";
		cin >> b;
		if (!cin){
			cin.clear();
			cin.sync();
		} else {
			typ=true;
		}
	}
	cout<<"Wynik dla sposobu petla for = "<<petlafor(b)<<'\n';
	cout<<"Wynik dla sposobu petla while = "<<petlawhile(b)<<'\n';
	cout<<"Wynik dla sposobu petla do-while = "<<dowhile(b)<<'\n';
	system("pause");
	return 0;
}
