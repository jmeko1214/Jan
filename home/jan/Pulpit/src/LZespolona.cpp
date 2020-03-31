#include "LZespolona.hh"



/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona Utworz(float a, float b)
{
  Wynik.re=a;
  Wynik.im=b;
  return Wynik;
}

void WyswietlZ1(LZespolona Skl1)
{
  cout << "("<<Skl1.re<<std::showpos<<Skl1.im<<std::noshowpos<<"i)";
}

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re * Skl2.re - Skl1.im * Skl2.im;
  Wynik.im = Skl1.re * Skl2.im + Skl1.im * Skl2.re;
  return Wynik;
}

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re =(Skl1.re*Skl2.re+Skl1.im*Skl2.im)/(Skl2.re*Skl2.re+Skl2.im*Skl2.im);
  Wynik.im =(Skl1.im*Skl2.re-Skl1.re*Skl2.im)/(Skl2.re*Skl2.re+Skl2.im*Skl2.im);
  return Wynik;
}

bool operator == (LZespolona Skl1, LZespolona Skl2)
{
  if((Skl.re=Skl2.re) && (Skl1.im=Skl2.im))
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

bool Wczytaj (LZespolona &Z1)
{
  char znak;
  cout<< "Podaj liczbe zespolona: "<<endl;
  cin>> znak;
  if(znak!='(')
    return 0;
  cin>>Z1.re;
  cin>>znak;
  cin>>Z1.im;
  if(znak=='-')
    Z1.im=(-Z1.im);
  cin>>znak;
  if(znak!='i')
    return 0;
  cin>>znak;
  if(znak!=')')
    return 0;
  else return 1;
}

void statystyki(stat &wskBazaTestu)
{
  test.l_odp=0;
  test.l_dob=0;
}

void doda_dobra(stat &wskBazaTestu)
{
  test.l_odp++;
  test.l_dop++;
}

void doda_zla(stat &wskBazaTestu)
{
  test.l_odp++;
}

int liczba_dobrych(stat &wskBazaTestu)
{
  int dobra=test.l_dob;
  return dobra;
}

float percent_dobrych(stat wskBazaTestu)
{
  float percent = (test.l_dob/test.l_odp) * 100;
  return percent;
}

void wyswietl_wyniki(int liczba_dobrych, float percent_dobrych)
{
  cout<< "Twoj wynik to: "<< liczba_dobrych <<" dobrych odpowiedzi."<<endl;
  cout<< "Procentowy wynik dobrych odpowiedzi to: " << percent_dobrych<< "%" <<endl;
  cout<< "Dziekujemy, zapraszamy ponownie :)\n";
}

