#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

void cls(){
	system("cls");
}

int walidacja(){
	int x;
	while(!(cin>>x)){cin.clear();cin.sync();}
	return x;
}

void opisProgramu(string text){
	cls();
	cout <<"==================================================="<<endl;
	cout <<" "<<text<<endl;
	cout <<" CDV 2016 Pawe³ Otlewski"<<endl;
	cout <<"==================================================="<<endl<<endl;
}

int random(int ileliczb=2147483647, int plus=0){
	return rand() % ileliczb + plus; 
}

void menu();

void zadanie1(){
	for (int i=0; i<=255;i++){
		cout<<i<<" : "<< char(i)<<endl;
	}
	system("pause");
}

void zadanie2(){
	opisProgramu("Algorytm losuj¹cy. Czêœæ A");
	cout<<"Podaj liczbê:";
	int i;
	i=walidacja();
	cout<<random(i)<<endl;
	system("pause");cls();
	opisProgramu("Algorytm losuj¹cy. Czêœæ B");
	cout<<"Podaj zakres:";
	int j;
	i=walidacja();
	j=i;
	while (i==j){
		j=walidacja();	
	}
	cout<<random(j,i)<<endl;
	system("pause");
}

void zadanie3(){
	opisProgramu("Wypisywanie tablicy");
	int i[10];
	for (int j=0;j<10;j++){
		cout<<"Podaj "<<j<<" element tablicy: ";
		i[j]=walidacja();
	}
	cls();
	for (int j=0;j<10;j++){
		cout<<"["<<j<<"]="<<i[j]<<endl;
	}
	system("pause");
}

void zadanie4(){
	opisProgramu("Przeliczanie tablicy");
	int i[20];
	for (int j=0;j<20;j++){
		i[j]=random()+1;
	}
	cls();
	cout<<"Zawartoœæ tablicy"<<endl;
	for (int j=0;j<20;j++){
		cout<<"["<<j+1<<"]="<<i[j]<<endl;
	}
	system("pause");
	cls();
	unsigned long long int suma=0;
	unsigned long long int sumakwadrat=0;
	unsigned long long int iloczyn=1;
	unsigned long long int srednia=0;
	for (int j=0;j<20;j++){
		suma+=i[j];
		sumakwadrat+=i[j]*i[j];
		iloczyn*=i[j];
	}
	srednia=suma/20;
	cout<<"Suma: "<<suma<<endl;
	cout<<"Suma kwadratów: "<<sumakwadrat<<endl;
	cout<<"Iloczyn: "<<iloczyn<<endl;
	cout<<"Œrednia arytmetyczna: "<<srednia<<endl;
	cout<<"Ro¿nica 1 i 20: "<<i[0]-i[19]<<endl;
	system("pause");
}

void zadanie5(){
	opisProgramu("Losowanie liczby");
	int i=1;
	int liczba1=random(),liczba2=random();
	while(!(liczba1==liczba2)){
		++i;
		liczba1=random();
		liczba2=random();
	}
	cout<<"Wygrana liczba: "<<liczba1<<endl;
	cout<<"Wylosowana za "<<i<<" razem"<<endl;
	system("pause");
}

void menu(){
	cls();
	int zadanie;
	cout<<"0 - Wyjœcie"<<endl;
	cout<<"1 - Algorytm wyœwietlaj¹cy tablicê kodów i znaków ASCII za pomoc¹ pêtli for."<<endl;
	cout<<"2 - Algorytm losuj¹cy"<<endl;
	cout<<"3 - Algorytm przypisania do tablicy"<<endl;
	cout<<"4 - Algorytm liczenia randomowej tablicy"<<endl;
	cout<<"5 - Algorytm losujacy liczby"<<endl;
	cout<<"Podaj numer zadania:";
	cin>>zadanie;
	cls();
	int i=1;
	switch(zadanie){
		case 0: i=0;break;
		case 1: zadanie1();break;
		case 2: zadanie2();break;
		case 3: zadanie3();break;
		case 4: zadanie4();break;
		case 5: zadanie5();break;
		default:
			cout<<"ERROR"<<endl;system("pause");menu();
	}
	if(i==1){
		menu();
	}
}

int main(){
	setlocale(LC_ALL,"");
	srand(time(0));
	opisProgramu("Zadania z wyk³adu 3");
	system("pause");
	menu();
	return 0;
}
