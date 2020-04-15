#include "Macierz.hh"


Macierz::MacierzKw()
{
  Wektor V;
  tabMac[0] = V;
  tabMac[1] = V;
  tabMac[2] = V;
}

/*Macierz::MacierzKw(Wektor *w){}*/

Macierz::MacierzKw(Wektor a1, Wektor a2, Wektor a3)   //interpretacja wierszowa macierzy
{
  tabMac[0] = a1;
  tabMac[1] = a2;
  tabMac[2] = a3;
}

const MacierzKw & Macierz::transpozycja() const  //transpozycja macierzy
{
  Macierz wynik;  //do wyniku jest zapisywany rezultat transpozycji macierzy
  for(int i=0;i<ROZMIAR;i++)
    {
      for(int j=0;j<ROZMIAR;j++)
	{
	  wynik[i][j]=Macierz[j][i];
	}
    }
  return wynik;
}

/* const MacierzKw & odwrotnosc() const;
  void odwrotnosc();     //z definicji np. gauss'a

  double wyznacznikGauss(); //metoda gauss'a*/
  
const Wektor Macierz::operator * (const Wektor W2) const  //mnozenie macierzy * wektor
{
  for(int i=0;i<ROZMIAR;i++)
    {
      Wektor(tabMac[i]*W2);
    }
  return Wektor;
}

const MacierzKw Macierz::operator * (const MacierzKw W2) const //mnożenie macierrzy
{
}

const MacierzKw Macierz::operator + (const MacierzKw W2) const
{
  for(int i=0;i<ROZMIAR;i++)
    {
      Macierz(tabMac[i]+W2[i]);
    }
  return Macierz;
}

const MacierzKw Macierz::operator - (const MacierzKw W2) const
{
  for(int i=0;i<ROZMIAR;i++)
    {
      Macierz(tabMac[i]-W2[i]);
    }
  return Macierz;
}

const MacierzKw Macierz::operator * (double 1) const
{
  Macierz wynik;  //do wyniku jest zapisywany wynik działania
  for(int i=0;i<ROZMIAR;i++)
    {
      wynik[i]=tabMac[i]*1;
    }
  return wynik; 
}

const MacierzKw Macierz::operator / (double 1) const
{
  Macierz wynik;  //do wyniku jest zapisywany wynik działania
  for(int i=0;i<ROZMIAR;i++)
    {
      wynik[i]=tabMac[i]/1;
    }
  return wynik; 
}


/* bool Macierz::operator == (const MacierzKw & W2) const
   {
   }
   
   bool Macierz::operator != (const MacierzKw & W2) const
   {
   }*/


const Wektor & Macierz::operator[] (int index) const
{
}

Wektor & Macierz::operator[] (int index); // M[2][0] - zerowy element drugiego wektora

/*  const Wektor & zwroc_kolumne(int index);
    void zmien_kolumne(int index, Wektor nowa);*/

std::istream& operator >> (std::istream &Strm, MacierzKw &Mac)
{
  Strm >> Mac[0] >> Mac[1] >> Mac[2];
  return Strm;
}

std::ostream& operator << (std::ostream &Strm, const MacierzKw &Mac)
{
  Strm <<Mac[0] << "\n" << Mac[1] << "\n" << Mac[2] << endl;
  return Strm;
}


//const MacierzKw operator * (double 1l, const MacierzKw W2);
