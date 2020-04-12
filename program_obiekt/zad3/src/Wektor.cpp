#include "Wektor.hh"


Wektor::Wektor()
 {
   tab[0]=0;
   tab[1]=0;
   tab[2]=0;
 }

Wektor::Wektor(double x, double y, double z)
  {
    tab[0]=x;
    tab[1]=y;
    tab[2]=z;
  }

/*Wektor::Wektor(double * tab){}*/

/*const Wektor & Wektor::operator += (const Wektor & W2){}*/

  const Wektor & Wektor::operator + (const Wektor & W2) const
  {
  }

  const Wektor & Wektor::operator - (const Wektor & W2) const
  {
  }

  double Wektor::operator * (const Wektor & W2) const
  {
  }

  const Wektor & Wektor::operator * (double li) const
  {
  }

  Wektor Wektor::operator * (double l1, Wektor W2)
  {
  }

  bool Wektor::operator == (const Wektor & W2) const
  {
    
  }

  bool Wektor::operator != (const Wektor & W2) const
  {
  }

double Wektor::dlugosc() const
  {
  }

double & Wektor::operator[] (int index)
  {
    if(index < 0 || index >= ROZMIAR)
      {
	cerr << "Jestes poza zakresem!" << endl;
	exit(1);
      }
    return tab[index];
  }

std::istream& operator >> (std::istream &Strm, Wektor &Wek)
{
  Strm >> Wek[0] >> Wek[1] >> Wek[2];
  return Strm;
}

std::ostream& operator << (std::ostream &Strm, const Wektor &Wek)
{
  cout <<"[" <<Wek[0] << " " << Wek[1] << " "<<Wek[2]<<"]"<<endl;
  return Strm;
}

