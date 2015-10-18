#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <time.h>
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

/*
 * Silnia
 */
 
 int silniarekurencyjna(int n){
 	int silnia=1;
 	for (int i=n;i>1;i--){
 		silnia*=i;
	}
	return silnia;
 }
 
 /*
  * Funkcje do obliczania zarobku
  */

int stawka_zarobku(int zarobek){
	if (zarobek<=20000){
		return 19;
	} else if (zarobek>20000 && zarobek<=30000) {
		return 21;
	} else {
		return 28;
	}
}

float zarobki_po_podatku(int podatek, int zarobek){
	return zarobek-zarobek*podatek;
}
