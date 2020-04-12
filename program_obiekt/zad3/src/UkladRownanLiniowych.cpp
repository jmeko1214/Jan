#include "UkladRownanLiniowych.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy UkladRownanLiniowych, ktore zawieraja 
 *  wiecej kodu niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
  UkladRownanL()
  {
  }

  UkladRownanL(MacierzKw AA, Wektor bb)
  {
  }

  const MacierzKw & get_A() const
  {
  }

  const Wektor & get_b() const
  {
  }

  void set_A(const MacierzKw & AA)
  {
  }

  void set_b(const Wektor & bb)
  {
  }

  Wektor Oblicz() const
  {
  }

  std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown)
  {
    MacierzKw tmpA;
    Wektor tmpb;

    strm >> tmpA >> tmpb;
    UklRown.set_A(tmpA);
    UklRown.set_b(tmpb);

    return strm;
  }

  std::ostream& operator << ( std::ostream &Strm, const UkladRownanLiniowych &UklRown)
  {
  }
