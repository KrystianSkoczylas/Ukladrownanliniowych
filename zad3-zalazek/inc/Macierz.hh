#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include <iostream>
#include "Wektor.hh"

class Macierz {
  Wektor tab[ROZMIAR];
  public:
  const Wektor & operator[] (int ind) const {
    if (ind < 0 || ind > ROZMIAR) {
      std::cerr << "blad: poza zakresem" << std::endl;
      exit(1);
    }
    return tab[ind];
  };

  Wektor & operator[] (int ind) {
    if (ind < 0 || ind > ROZMIAR) {
       std::cerr << "blad: poza zakresem" <<  std::endl;
      exit(1);
    }
    return tab[ind];
  };
  
  const Macierz & operator + (const Macierz & W) const; 
  const Macierz & operator - (const Macierz & W) const; 
  const Macierz & operator * (const Macierz & W) const; 
  const Wektor & operator * (const Wektor & W) const;
  
  const Macierz & transpozycja() const;
  const Macierz & odwrotnosc() const;
  
  double Wyznacznik() const; 
};

std::istream& operator >> (std::istream &Strm, Macierz &Mac);//OK

std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);//OK


#endif
