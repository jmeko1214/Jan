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
  test.l_dop++;
  cout<< "Twoja odpowiedz byla dobra :)"<< endl;
}

void doda_zla(stat &test)
{
  test.l_odp++;
  cout<<"Twoja odpowiedz byla zla :("<< endl;
}

int liczba_dobrych(stat &test)
{
  int dobra=test.l_dob;
  return dobra;
}

float percent_dobrych(stat &test,float liczba_dobrych)
{
  float percent = (test.l_dob/test.l_odp) * 100;
  return percent;
}

void wyswietl_wyniki(int liczba_dobrych, float percent_dobrych)
{
  cout<< "Twoj wynik to: "<< liczba_dobrych <<" dobrych odpowiedzi."<<endl;
  cout<< "Procentowy wynik dobrych odpowiedzi to: " << percent_dobrych<< "%" <<endl;
  cout<< "Dziekujemy, zapraszamy ponownie :)\n";
}
