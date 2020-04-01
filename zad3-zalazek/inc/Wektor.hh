#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>

class Wektor {
  double tab[ROZMIAR];
public:
  Wektor() {for(int i=0;i<ROZMIAR;++i) tab[i]=0;}
  const double & operator[] (int ind) const {
    if (ind < 0 || ind > ROZMIAR) {
       std::cerr << "blad: poza zakresem" <<  std::endl;
      exit(1); 
    }
    return tab[ind];
  };
  double & operator[] (int ind) {
    if (ind < 0 || ind > ROZMIAR) {
       std::cerr << "blad: poza zakresem" <<  std::endl;
      exit(1);
    }
    return tab[ind];
  };

  
  double dlugosc() const;
  double operator * (const Wektor & W2) const;
  Wektor operator * (double skalar) const; // W * 2
  const Wektor & operator + (const Wektor & W2) const;
  const Wektor & operator - (const Wektor & W2) const;

  
  
};

Wektor operator * (double skalar, const Wektor & W2) ; // 3 * W

std::istream& operator >> (std::istream &Strm, Wektor &Wek); /*wczytanie wektora*/


std::ostream& operator << (std::ostream &Strm, const Wektor &Wek); /*wyswietlenie wektora */

Wektor iloczyn_wektorowy (Wektor & W1,Wektor & W2);

#endif
