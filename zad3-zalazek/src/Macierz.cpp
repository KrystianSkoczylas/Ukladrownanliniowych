#include "Macierz.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
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

const Macierz & Macierz::operator + (const Macierz & W) const
{ //nie dziala
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

const Macierz & Macierz::operator - (const Macierz & W) const
{
  
}

const Macierz & Macierz::operator * (const Macierz & W) const
{
 
}

const Wektor & Macierz::operator * (const Wektor & W) const
{
 
}

const Macierz & Macierz::transpozycja() const
{//nie dziala
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
