#include "hazard.h"

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));
	SetConsoleTitleA("Hazard na piątkę");
	int liczby[6][2],winner[6],x,y;
	menu();
	cls();

    int money=100,wynik=0;

	bool koniec=FALSE;

    while (koniec==FALSE){

        money--;
        wynik=0;

        for (int i=0; i < 6; i++)                   //Podawanie liczb
        {

            do                                      //Pętla sprawdzająca, czy to zakres od 1 do 49
            {
                cls();
                cout << "Podaj " << i + 1 << " liczbę z zakresu od 1 do 49" << endl;
                x = 0;                              //Czyszczenie zmiennej
                x = walidacja();
                for (int j=0; j < 6; j++){          //Sprawdzanie, czy liczba się powtarza
                    if (liczby[j][0]==x){
                        x=0;
                    }
                }
                liczby[i][0] = x;                   //Przypisanie zmiennej
                liczby[i][1] = 0;                   //Wyczyszczenie zawartości
            } while ( x < 1 || x > 49 );            //Sprawdzenie czy liczba jest z przedziału

            bool test;
            do{
                y=random(49)+1;                   //Dla y przypisujemy randomową liczbę
                test=FALSE;                         //Ustawiamy wartość test na fałsz
                for (int j=1;j<6;j++){              //Pętla sprawdzająca powtórki
                    if(winner[j]==y){               //Jeśli jakaś liczba się powtórzy
                        test=TRUE;                  //to zmienia wartość na prawda
                    }
                }

            } while (test==TRUE);
            winner[i]=y;                            //Po wyjściu z pętli przypisujemy liczbę
        }
        cls();

        cout<<"Losowanie:"<<endl;                   //Wypisanie liczb
        for (int i = 0; i < 6; i++)
        {
            cout << winner[i];
            cout.width(5);
        }
        cout<<endl<<"Wytypowane liczby:"<<endl;     //Wypisanie liczb
        for (int i = 0; i < 6; i++)
        {

            for(int j = 0; j < 6; j++){
                if (liczby[i][0]==winner[j]){
                    liczby[i][1]+=1;
                }
            }

        }

        for (int i = 0; i < 6; i++)
        {
            if (liczby[i][1]==1){
                cout << "(" << liczby[i][0] << ")";
                wynik++;
            } else {
                cout << liczby[i][0];
            }
            cout.width(5);
        }

        cout<<endl;
        switch(wynik){
            case 3: money+=2;       break;
            case 4: money+=10;      break;
            case 5: money+=100;     break;
            case 6: money+=100000;  break;
        }

        if (money<1){
            koniec=TRUE;
        } else {
            koniec=kontynuacja();
        }

        for (int i=0; i<6; i++){
            liczby[i][0]=0;
            liczby[i][1]=0;
        }
    }

    cout<<"Stan konta: "<<money<<endl;

	pause("Program zakończył działanie! Dziękujemy!");
	return 0;
}
