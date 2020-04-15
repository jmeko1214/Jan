#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include <iostream>


class Macierz {
  Wektor tabMac[ROZMIAR];
  
  public:
  MacierzKw();
  // MacierzKw(Wektor *w);
  MacierzKw(Wektor a1, Wektor a2, Wektor a3);    //interpretacja wierszowa macierzy
  //const MacierzKw & transpozycja() const;
  //const MacierzKw & odwrotnosc() const;

  //double wyznacznikGauss(); //metoda gauss'a
  
  const Wektor operator * (const Wektor W2) const;          // wektor * macierz
  const MacierzKw operator * (const MacierzKw W2) const;    // macierz * macierz
  const MacierzKw operator + (const MacierzKw W2) const;
  const MacierzKw operator - (const MacierzKw W2) const;
  const MacierzKw operator * (double 1) const;
  const MacierzKw operator / (double 1) const;

  //  bool operator == (const MacierzKw & W2) const;
  //bool operator != (const MacierzKw & W2) const;

  const Wektor & operator[] (int index) const;
  Wektor & operator[] (int index); // M[2][0] - zerowy element drugiego wektora

  const Wektor & zwroc_kolumne(int index);
  void zmien_kolumne(int index, Wektor nowa);

  std::istream& operator >> (std::istream &Strm, MacierzKw &Mac);
  std::ostream& operator << (std::ostream &Strm, const MacierzKw &Mac);

  //const MacierzKw operator * (double 1l, const MacierzKw W2);
};

#endif
