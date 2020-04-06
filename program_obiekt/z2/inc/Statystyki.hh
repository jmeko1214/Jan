#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH


struct stat{
  int l_odp;     //liczba odpowiedzi
  int l_dob;     //liczba dobrych odpowiedzi
};


void statystyki(stat &test);      //operacje statystyk
void doda_dobra(stat &test);
void doda_zla(stat &test);
float liczba_dobrych(stat &test);
double percent_dobrych(stat &test, float liczba_dobrych);
void wyswietl_wyniki(float liczba_dobrych, double percent_dobrych);


#endif
