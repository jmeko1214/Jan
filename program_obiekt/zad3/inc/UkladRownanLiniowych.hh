#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>


class UkladRownanLiniowych {
  MacierzKw A;
  Wektor b;
  
  public:
  UkladRownanL() {};
  UkladRownanL(MacierzKw AA, Wektor bb) : A(AA), b(bb) {};
  const MacierzKw & get_A() const;
  const Wektor & get_b() const;
  void set_A(const MacierzKw & AA);
  void set_b(const Wektor & bb);

  Wektor Oblicz() const;

  std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);
  std::ostream& operator << (std::ostream &Strm, const UkladRownanLiniowych &UklRown);

};

#endif
