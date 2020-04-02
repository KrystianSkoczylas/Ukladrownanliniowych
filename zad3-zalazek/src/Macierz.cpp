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
//const Macierz & Macierz::operator + (const Macierz & W) const
const Macierz  Macierz::operator + (const Macierz & W) const
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
//const Macierz & Macierz::operator - (const Macierz & W) const
const Macierz  Macierz::operator - (const Macierz & W) const
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
//const Macierz & Macierz::operator * (const Macierz & W) const
const Macierz  Macierz::operator * (const Macierz & W) const /*mnozenie macierzy */
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
//const Wektor & Macierz::operator * (const Wektor & W) const
const Wektor  Macierz::operator * (const Wektor & W) const /*mnozenie macierzy przez wektor */
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
//const Macierz & Macierz::transpozycja() const
const Macierz  Macierz::transpozycja() const
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

const Macierz & Macierz::odwrotnosc() const
{
 
}

double Macierz::Wyznacznik()const
{double wyn;
  if(ROZMIAR==1)
    {return tab[ROZMIAR][ROZMIAR]; }
  else//wzor na wyznacznik ?
    {
      for(int i=0;i<ROZMIAR;++i)
	{
	  for(int j=0;j<ROZMIAR;++j)
	    {	
	      wyn+=tab[i][j];
	    }
	}
    }
  return wyn;
}
