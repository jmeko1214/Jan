#include "Statystyki.hh"
#include<iostream>

using namespace std;


void statystyki(stat &test)
{
  test.l_odp=0;
  test.l_dob=0;
}

void doda_dobra(stat &test)
{
  test.l_odp++;
  test.l_dob++;
  cout<< "Twoja odpowiedz byla dobra :)"<< endl;
}

void doda_zla(stat &test)
{
  test.l_odp++;
  cout<<"Twoja odpowiedz byla zla :("<< endl;
}

float liczba_dobrych(stat &test)
{
  float dobra=test.l_dob;
  return dobra;
}

double percent_dobrych(stat &test,float liczba_dobrych)
{
  double percent = (liczba_dobrych/test.l_odp) * 100;
  return percent;
}

void wyswietl_wyniki(float liczba_dobrych, double percent_dobrych)
{
  cout<< "Twoj wynik to: "<< liczba_dobrych <<" dobrych odpowiedzi."<<endl;
  cout<< "Procentowy wynik dobrych odpowiedzi to: " << percent_dobrych<< "%" <<endl;
  cout<< "Dziekujemy, zapraszamy ponownie :)\n";
}
