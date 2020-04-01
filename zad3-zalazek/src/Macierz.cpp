#include "Macierz.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
std::istream& operator >> (std::istream &Strm, Macierz &Mac)
{
  for(int i=0;i<ROZMIAR;++i)
    {
      Strm>>Mac[i];
    }
  return Strm;
}

std::ostream& operator << (std::ostream &Strm, const Macierz &Mac)
{
  
}

const Macierz & operator + (const Macierz & W)
{ 
  
}

const Macierz & operator - (const Macierz & W)
{
  
}

const Macierz & operator * (const Macierz & W)
{
 
}

const Wektor & operator * (const Wektor & W)
{
 
}

const Macierz & transpozycja()
{
  
}

const Macierz & odwrotnosc()
{

}

double Wyznacznik()
{
 
}
