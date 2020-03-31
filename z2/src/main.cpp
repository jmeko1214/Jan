#include <iostream>
#include "BazaTestu.hh"
#include "WyrazenieZesp.hh"
#include "LZespolona.hh"
#include "Statystyki.hh"


using namespace std;

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false)
  {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  LZespolona Wynik_Odpowiedz;
  LZespolona Wynik_Dobry;
  stat test;
  float dobra;
  double percent;
  cout<< " Witam w moim sprawdzianie z liczb zespolonych" <<endl;

  statystyki(test);
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe))
  {
    cout << " To jest twoje zadanie: ";
    cout << WyrZ_PytanieTestowe;
    Wynik_Dobry=Oblicz(WyrZ_PytanieTestowe);
    cout<<"Twoja odpowiedz: "<<endl;
    for(int i=0;i<3;i++)
      {
	cin>>Wynik_Odpowiedz;
	if(cin.fail())
	  {
	    cout<<"Nie uzyskalem odpowiedzi. Podaj jeszcze raz!"<<endl;
	    cin.clear();
	    cin.ignore(1000, '\n');
	  }
	else
	  {
	    break;
	  }
	if(Wynik_Odpowiedz==Wynik_Dobry)
	  {
	    doda_dobra(test);
	  }
	else if(Wynik_Odpowiedz!=Wynik_Dobry)
	  doda_zla(test);
      }
  }

  dobra=liczba_dobrych(test);
  percent=percent_dobrych(test, dobra);
  wyswietl_wyniki(dobra, percent);
  
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

  return 0;
}
