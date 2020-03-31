#include <iostream>
#include "BazaTestu.hh"
#include "BazaTestu.cpp"
#include "WyrazenieZesp.cpp"
#include "LZespolona.cpp"


using namespace std;

int main(int argc, char **argv)
{
  Wynik = Dodaj(Z1,Z2);
  Wynik = Odejmnij(Z1,Z2);
  Wynik = Pomnoz(Z1,Z2);
  Wynik = Podziel(Z1,Z2);

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
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe))
  {
    cout << " Czesc rzeczywista pierwszego argumentu: ";
    cout << WyrZ_PytanieTestowe.Arg1.re << endl;
    cout << " Czesc urojona pierwszego argumentu: ";
    cout << WyrZ_PytanieTestowe.Arg1.im << endl;
    cout << " Czesc rzeczywista drugiego argumentu: ";
    cout << WyrZ_PytanieTestowe.Arg2.re << endl;
    cout << " Czesc urojona drugiego argumentu: ";
    cout << WyrZ_PytanieTestowe.Arg2.im << endl;
  }

  
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

  return 0;
}
