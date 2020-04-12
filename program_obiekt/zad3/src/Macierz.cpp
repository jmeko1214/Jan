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

//const MacierzKw & transpozycja() const;
//void transpozycja();

/* const MacierzKw & odwrotnosc() const;
  void odwrotnosc();     //z definicji np. gauss'a

  double wyznacznikGauss(); //metoda gauss'a*/
  
  const Wektor Macierz::operator * (const Wektor W2) const
  {
  }

  const MacierzKw Macierz::operator * (const MacierzKw W2) const
  {
  }

  const MacierzKw Macierz::operator + (const MacierzKw W2) const
  {
  }

  const MacierzKw Macierz::operator - (const MacierzKw W2) const
  {
  }

  const MacierzKw Macierz::operator * (double 1) const
  {
  }

  const MacierzKw Macierz::operator / (double 1) const
  {
  }


  bool Macierz::operator == (const MacierzKw & W2) const
  {
  }

  bool Macierz::operator != (const MacierzKw & W2) const
  {
  }


  const Wektor & Macierz::operator[] (int index) const
  {
  }

  Wektor & Macierz::operator[] (int index); // M[2][0] - zerowy element drugiego wektora

  //const double & operator() (int index1, int index2) const;
  //double & operator() (int index1, int index2);   //M(2,0)

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
