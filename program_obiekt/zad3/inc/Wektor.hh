#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>


class Wektor {
  double tab[ROZMIAR];

  public:
  Wektor();
  Wektor(double x, double y, double z);
  Wektor(double * tab);

  // const Wektor & operator += (const Wektor & W2);
  const Wektor & operator + (const Wektor & W2) const;   //operacje matematyczne
  const Wektor & operator - (const Wektor & W2) const;
  double operator * (const Wektor & W2) const;   //iloczyn skalarny wektorów
  const Wektor & operator * (double li) const;   //wektor * liczba
  const Wektor & operator / (double li) const;   //wektor / liczba

  Wektor operator * (double l1, Wektor W2);

  bool operator == (const Wektor & W2) const;
  bool operator != (const Wektor & W2) const;

  double dlugosc() const;

  const double & operator[] (int index) const;
  double & operator[] (int index);
  
  std::istream& operator >> (std::istream &Strm, Wektor &Wek);
  std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);

};

  
#endif
