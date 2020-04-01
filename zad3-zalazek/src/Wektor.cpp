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
  for (int i=0;i<ROZMIAR;++i) {
    wyn += tab[i] * tab[i]; /*tutaj automatycznie wstawiane jest this */
    //wyn += this->tab[i] * this->tab[i]; /*w przypadku przeslaniania zmeinnych trzeba recznie this*/
  }
  return sqrt(wyn);
}

double Wektor::operator * (const Wektor & W2) const
{
  double wyn;
  for (int i=0;i<ROZMIAR;++i) {
    wyn += tab[i] * W2.tab[i];
    // wyn += tab[i] * W2[i];
  }
  return wyn;
}

const Wektor & operator + (const Wektor & W2)
{
  
}

const Wektor & operator - (const Wektor & W2)
{
 
}

Wektor iloczyn_wektorowy (Wektor & W1,Wektor & W2)
{
  
}
