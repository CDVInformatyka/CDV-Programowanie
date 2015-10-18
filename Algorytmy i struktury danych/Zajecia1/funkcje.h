#include <iostream>
#include <windows.h>

using namespace std;

/*
 * Obliczanie na ró¿ne sposoby sumy liczb
 */
int petlafor(int zmiennab){
	int wynik=0;
	for(int a=1;a<=zmiennab;a++){
		wynik+=a;
	}
	return wynik;
}

int dowhile(int zmiennab){
	int a=1;
	int wynik=0;
	do{
		wynik+=a;
		a++;
	} while (a-1!=zmiennab);
	return wynik;
}

int petlawhile(int zmiennab){
	int a=1;
	int wynik=0;
	while(a-1!=zmiennab){
		wynik+=a;
		a++;
	}
	return wynik;
}

/*
 * Œrednie arytmetyczne
 */
int sredniasumyliczb(int a, int b){
	int suma=0,n=0;
	for (a;a<=b;a++){
		suma+=a;
		n++;
	}
	return  suma/n;
}
