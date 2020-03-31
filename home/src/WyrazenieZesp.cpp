 #include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

std::istream & operator >> (std::istream & strm, WyrazenieZesp & wyraz)
{
  char znak;
  strm >> wyraz.Arg1 >> znak >> wyraz.Arg2;
  switch(znak)
    {
    case '+':
      {
	wyraz.Op = Op_Dodaj;
	break;
      }
    case '-':
      {
	wyraz.Op = Op_Odejmij;
	break;
      }
    case '*':
      {
	wyraz.Op = Op_Mnoz;
	break;
      }
    case '/':
      {
	wyraz.Op = Op_Dziel;
	break;
      }
    default:
      {
        cout<< "Nie znam tekiej operacji"<<endl;
	break;
      }
    }
}


void Wyswietl(WyrazenieZesp  WyrZ)
   {
     cout<< "Wyrazenie zespolone " << WyrZ << endl;
   }
			    
LZespolona Oblicz(WyrazenieZesp  WyrZ)
   {
     WyrZ(Arg1,Arg2);

   }
