#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};

struct stat {
  int l_odp;     //liczba odpowiedzi
  int l_dob;     //liczba dobrych odpowiedzi
};

/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */


LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);

bool operator == (LZespolona Skl1, LZespolona Skl2);

bool Wczytaj(LZespolona &Z1);     //operacje wejscia - wyjscia
LZespolona Utworz(float a, float b);
void WyswietlZ1(LZespolona Skl1);

void statystyki(stat &test);      //operacje statystyk
void doda_dobra(stat &test);
void doda_zla(stat &test);
int liczba_dobrych(stat &test);
float percent_dobrych(stat test);
void wyswietl_wyniki(int liczba_dobrych, float percent_dobrych);

#endif
