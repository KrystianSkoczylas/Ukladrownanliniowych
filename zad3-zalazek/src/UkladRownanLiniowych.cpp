#include "UkladRownanLiniowych.hh"

std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown)/*wczytanie ukladu*/
{
   Macierz tmpA;
   Wektor tmpB;
   Strm>>tmpA>>tmpB;
   UklRown.zmien_macierz(tmpA);
   UklRown.zmien_wektor(tmpB);
   return Strm;
}

std::ostream& operator << (std::ostream &Strm, const UkladRownanLiniowych &UklRown)/*wyswietlenie ukladu*/
{
  Strm<<"Macierz A:"<<std::endl<<UklRown.wez_macierz()<<std::endl;
  Strm<<"Wektor B:"<<std::endl<<UklRown.wez_wektor()<<std::endl;
  return Strm;
}

Wektor UkladRownanLiniowych::Oblicz() const
{
  Wektor wyn;
  double wyznacznik;
  Macierz T;
  wyznacznik=A.Wyznacznik();
  if(wyznacznik==0)
    {std::cerr<<"Wyzacznik glowny "<<wyznacznik<<".Brak rozwiazan."; exit(1);}
  for(int i=0;i<ROZMIAR;++i)
    {
      T=A.transpozycja();
      for(int j=0;j<ROZMIAR;++j)
	{
	  T[i][j]=B[j];
	  wyn[i]=( T.Wyznacznik() ) / wyznacznik;
	}
    }
  return wyn;
}

void UkladRownanLiniowych::zmien_macierz( const Macierz & AA)//set_A
{
  for(int i=0;i<ROZMIAR;++i)
    {
      for(int j=0;j<ROZMIAR;++j)
	{
	  A[i][j]=AA[i][j];
	}
    }
}

const Macierz & UkladRownanLiniowych::wez_macierz() const//get_A
{
  return A;
}

void UkladRownanLiniowych::zmien_wektor(const Wektor & BB)//set_B
{
  for(int i=0;i<ROZMIAR;++i)
    {
      B[i]=BB[i];
    }
}

const Wektor & UkladRownanLiniowych::wez_wektor()const//get_B
{
  return B;
}
