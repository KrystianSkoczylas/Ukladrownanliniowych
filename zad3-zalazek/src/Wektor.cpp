#include "Wektor.hh"
#include <cmath>

std::istream& operator >> (std::istream &Strm, Wektor &Wek)
{
  for(int i=0;i<ROZMIAR;++i)
    {
      Strm>>Wek[i];
    }
  return Strm;
}

std::ostream& operator << (std::ostream &Strm, const Wektor &Wek)
{
  for(int i=0;i<ROZMIAR;++i)
    {
      Strm<<Wek[i]<<" ";
    }
  return Strm;
}

double Wektor:: dlugosc() const
{
  double wyn=0;
  for (int i=0;i<ROZMIAR;++i)
    {
      wyn += tab[i] * tab[i]; 
    }
  return sqrt(wyn);
}

double Wektor::operator * (const Wektor & W2) const /*mnozenie wektorow iloczyn skalarny */
{
  double wyn;
  for (int i=0;i<ROZMIAR;++i) {
    wyn += tab[i] * W2.tab[i];
  }
  return wyn;
}

Wektor Wektor::operator * (double skalar) const /*mnozenie wektora przez liczbe */
{
  Wektor wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      wyn[i]=tab[i]*skalar;
    }
  return wyn;
}

Wektor operator * (double skalar, const Wektor & W2) /*mnozenie liczby przez wektor */
{
  Wektor wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      wyn[i]=skalar*W2[i];
    }
  return wyn;
}

Wektor  Wektor::operator + (const Wektor & W2) const /*dodawanie wektorow */
{//dziala bez &
  Wektor wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      wyn[i]=tab[i]+W2[i];
    }
  return wyn;
}

Wektor  Wektor::operator - (const Wektor & W2) const /*odejmowanie wektorow */
{
  Wektor wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      wyn[i]=tab[i]-W2[i];
    }
  return wyn;
}

Wektor iloczyn_wektorowy (Wektor & W1,Wektor & W2)/*tylko wektory o rozmiarz 3*/ 
{
  Wektor wyn;
  wyn[0]=W1[1]*W2[2]-W1[2]*W2[1];
  wyn[1]=-W1[0]*W2[2]+W1[2]*W2[0];
  wyn[2]=W1[0]*W2[1]-W1[1]*W2[0];
  return wyn;
}
