#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>
//#include <windows.h>

using namespace std;

void czyszczenieCin(){
	cin.sync();
	cin.clear();
}

void menu(){
	system("cls");
	int wybor_menu;
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED);
	cout<<"Wybierz opcjê w Menu"<<endl;
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	cout<<"1. Padaczka"<<endl;
	cin>>wybor_menu;
	if (cin.fail()){
		czyszczenieCin();
		cout<<"B³¹d! Podaj ponownie dane!"<<endl;
		system("pause");
		menu();
	}
}

void padaczka(){
	srand(time(NULL));
    for(;;){
    	system("cls");
    	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand());
	}
}
