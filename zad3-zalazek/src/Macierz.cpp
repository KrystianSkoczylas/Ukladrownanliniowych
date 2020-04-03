#include "Macierz.hh"

std::istream& operator >> (std::istream &Strm, Macierz &Mac) /*wczytanie macierzy */
{
  for(int i=0;i<ROZMIAR;++i)
    {
      Strm>>Mac[i];
    }
  return Strm;
}

std::ostream& operator << (std::ostream &Strm, const Macierz &Mac)/*wyswietlenie macierzy */
{
  for(int i=0;i<ROZMIAR;++i)
    {
      Strm<<Mac[i]<<" "<<std::endl;
    }
  return Strm;
}

 Macierz  Macierz::operator + (const Macierz & W) const
{ // dziala bez &
  Macierz wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      for(int j=0;j<ROZMIAR;++j)
	{
	  wyn[i][j]=tab[i][j]+W[i][j];
	}
    }
  return wyn;
}

 Macierz  Macierz::operator - (const Macierz & W) const
{// dziala bez &
  Macierz wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      for(int j=0;j<ROZMIAR;++j)
	{
	  wyn[i][j]=tab[i][j]-W[i][j];
	}
    }
  return wyn;
}

 Macierz  Macierz::operator * (const Macierz & W) const /*mnozenie macierzy */
{//dziala bez &
  Macierz wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      for(int j=0;j<ROZMIAR;++j)
	{ 
	  for(int k=0;k<ROZMIAR;++k)
	  wyn[i][j]+=tab[i][k]*W[k][j];
	}
    }
  return wyn;
}

 Wektor  Macierz::operator * (const Wektor & W) const /*mnozenie macierzy przez wektor */
{//dziala bez &
  Wektor wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      for(int j=0;j<ROZMIAR;++j)
	{
	  wyn[i]+=W[i]*tab[i][j];
	}
    }
  return wyn;
}

 Macierz  Macierz::transpozycja() const
{// dziala bez &
  Macierz wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      for(int j=0;j<ROZMIAR;++j)
	{
	 wyn[i][j]=tab[j][i];
	}
    }
  return wyn;
}

double Macierz::Wyznacznik()const
{
  bool wylaczoneWiersze[ROZMIAR];
  bool wylaczone_kolumny[ROZMIAR];
  for(int i=0;i<ROZMIAR;++i)
    {
      wylaczoneWiersze[i] = false;
      wylaczone_kolumny[i] = false;
    }
  return wyznacznikRekurencyjny(wylaczoneWiersze, wylaczone_kolumny);
}

double Macierz::wyznacznikRekurencyjny(bool wylaczoneWiersze[ROZMIAR], bool wylaczone_kolumny[ROZMIAR]) const
{
  if(sumujTrue(wylaczoneWiersze) == ROZMIAR-1 && sumujTrue(wylaczone_kolumny) == ROZMIAR-1)
    {
      for(int i=0;i<ROZMIAR;++i)
	{
	  for(int j=0;j<ROZMIAR;++j) if(!wylaczoneWiersze[i] && !wylaczone_kolumny[j]) return tab[i][j];
	}
      exit(1);
    }
	
  int j = 0;
  double det = 0;
  int minus = 1;
  int prawdziwy_nr_wiersza = 0;
	
  while(wylaczone_kolumny[j]) { j++; }
	
  wylaczone_kolumny[j] = true;
  for(int i=0;i<ROZMIAR;++i)
    {
      if(wylaczoneWiersze[i]) continue;
      if((prawdziwy_nr_wiersza)%2 == 0) minus = 1; else minus=-1;
      wylaczoneWiersze[i] = true;
      det += minus * tab[i][j] * wyznacznikRekurencyjny(wylaczoneWiersze, wylaczone_kolumny);
      wylaczoneWiersze[i] = false;
      prawdziwy_nr_wiersza++;
    }
  wylaczone_kolumny[j] = false;
  return det;
}

int Macierz::sumujTrue(bool array[ROZMIAR]) const
{
  int suma = 0;
  for(int i=0;i<ROZMIAR;++i)
    {
      if(array[i]) suma++;
    }
  return suma;
}

