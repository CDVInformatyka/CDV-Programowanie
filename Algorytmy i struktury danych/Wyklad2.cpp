#include <iostream>
#include <cmath>
#include <cstdlib>

/*
 *  Program został napisany za pomocą środowiska Code::Blocks 13.12 z kompilatorem
 *
 */

using namespace std;

int walidacja(){
	int x;
	while(!(cin>>x)){cin.clear();cin.sync();}
	system("cls");return x;
}

int walidacjad(){
	double x;
	while(!(cin>>x)){cin.clear();cin.sync();}
	system("cls");return x;
}

void zadanie1() {
	cout << "Podaj liczbê: ";
	int x=walidacja();
	if (x > 0) {cout << "Dodatnia";}
	if (x < 0) {cout << "Ujemna";}
	if (x == 0) {cout << "ZERO";}
	string z="y";
	while (z!="T" && z != "t" && z != "N" && z != "n") {
            cout << "\n\nChcesz kontynuować działanie zadania? [T/N] ";
            cin >> z;
    }
	if (z == "T" || z == "t") {zadanie1();}
	if (z == "N" || z == "n") {cout << "Dziêki za skorzystanie z tego programu";}
}

void zadanie2() {
	cout << "Podaj 3 liczby: ";
	int x1=walidacja(),x2=walidacja(),x3=walidacja();
	if (x1<x2 && x2<x3){cout<<x1<<" "<<x2<<" "<<x3;}
	if (x1<x3 && x3<x2){cout<<x1<<" "<<x3<<" "<<x2;}
	if (x2<x1 && x1<x3){cout<<x2<<" "<<x1<<" "<<x3;}
	if (x2<x3 && x3<x1){cout<<x2<<" "<<x3<<" "<<x1;}
	if (x3<x1 && x1<x2){cout<<x3<<" "<<x1<<" "<<x2;}
	if (x3<x2 && x2<x1){cout<<x3<<" "<<x2<<" "<<x1;}
	cout<<endl;
	system("pause"); system("cls");
}

void zadanie3() {
	cout << "Podaj liczbe: ";
	int x=walidacja();
	switch(x){
		case 0:	cout<<"ZERO";		break;
		case 1:	cout<<"Jeden";		break;
		case 2:	cout<<"Dwa";		break;
		case 3:	cout<<"Trzy";		break;
		case 4:	cout<<"Cztery";		break;
		case 5:	cout<<"Pięć";		break;
		case 6:	cout<<"Sześć";		break;
		case 7:	cout<<"Siedem";		break;
		case 8:	cout<<"Osiem";		break;
		case 9:	cout<<"Dziewić";	break;
		case 10:cout<<"Dziesięć";	break;
		default:cout<<"ERROR 404";
	}
	system("pause"); system("cls");
}

void zadanie4() {
	cout << "Podaj liczbe: ";
	int x=walidacja();
	system("cls");
	cout<<"\nModulolo\n";
	if (x%2==0){cout<<"Liczba jest parzysta"<<endl;} else {cout<<"Liczba nie jest parzysta"<<endl;}
	cout<<"\nLogicznie\n";
	if (x & 1){cout<<"Liczba nie jest parzysta"<<endl;} else {cout<<"Liczba jest parzysta"<<endl;}
	cout<<"\nDzielnik\n";
	if (x/2){cout<<"Liczba jest parzysta"<<endl;} else {cout<<"Liczba nie jest parzysta"<<endl;}
	system("pause");system("cls");
}

void zadanie5() {
	cout << "Podaj liczbe: ";
	double x=walidacjad();
	cout << "Podaj potêgê: ";
	double n=walidacjad();
	double wynik1=x;
	system("cls");
	for (double i=n;i>1;i--){wynik1*=x;}
	cout<<"Wynik pêtln¹: "<<wynik1<<endl;
	cout<<"Wynik funkcja: "<<pow(x,n)<<endl;
	system("pause");system("cls");
}

void zadanie6() {
	int x=0;
	while(x<10 || x>99){cout<<"Podaj liczbê 2-cyfrow¹: ";cin>>x;}
	for (int i=10;i<=x;i++){cout<<i<<" ";}
	cout<<endl;
	system("pause");system("cls");
}

void zadanie7a() {
	cout<<"Podaj liczbe:";
	int x1=walidacja();
	cout<<"Podaj 2 liczbe:";
	int x2=walidacja();
    while(x1!=x2){if(x1>x2){x1-=x2;} else {x2-=x1;}}
	cout<<"NWD: "<<x1<<endl;
	system("pause");
}

void zadanie7b() {
	cout<<"Podaj ilość liczb z ciągu Fibonacci'ego";
	int x=walidacja();
	unsigned long long x1 = 0, x2 = 1;
	for(int i=0;i<x;i++){cout<<x2<<" ";x2 += x1;x1 = x2-x1;}
	system("pause");
}

void menu() {
	int wybor;
    cout<<"1. Sprawdza liczbę dodatnia lub ujemna lub zero"<<endl;
    cout<<"2. Układa w porządku rosnącym"<<endl;
    cout<<"3. Wyœwietlamy slownie liczbe"<<endl;
    cout<<"4. Czy liczba jest parzysta, czy nie parzysta"<<endl;
    cout<<"5. Obliczanie potegi n-tej"<<endl;
    cout<<"6. Wypisanie liczb od 10 do podanej od usera"<<endl;
    cout<<"7. Algorytm Euklidesa"<<endl;
    cout<<"8. Ciag Fibonaciego"<<endl;
	cout<<"================================================"<<endl;
	cout<<"Podaj numer zadania: ";
	if (cin >> wybor) {
		system("cls");
		switch (wybor) {
		case 1:	cout<<"Sprawdza liczbê dodatnia lub ujemna lub zero"<<endl;	zadanie1();		break;
		case 2:	cout<<"Uk³ada w porz¹dku rosnacym"<<endl;					zadanie2();		break;
		case 3:	cout<<"Wyœwietlamy slownie liczbe"<<endl;					zadanie3();		break;
		case 4:	cout<<"Czy liczba jest parzysta, czy nie parzysta"<<endl;	zadanie4();		break;
		case 5:	cout<<"Obliczanie potegi n-tej"<<endl;						zadanie5();		break;
		case 6:	cout<<"Wypisanie liczb od 10 do podanej od usera"<<endl;	zadanie6();		break;
		case 7:	cout<<"Algorytm Euklidesa"<<endl;							zadanie7a();	break;
		case 8:	cout<<"Ciag Fibonaciego"<<endl;								zadanie7b();	break;
		default: menu();
		}
	}
	else {cin.clear();cin.sync();system("cls");menu();}
	system("cls");
}

int main() {
	setlocale(LC_ALL, "");
	cout<<"Witam! Jestem programem!\n";
	menu();
	return 0;
}
