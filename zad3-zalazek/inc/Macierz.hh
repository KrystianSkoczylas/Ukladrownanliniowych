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
  
  const Macierz  operator + (const Macierz & W) const;//OK bez & 
  const Macierz  operator - (const Macierz & W) const;//OK bez & 
  const Macierz  operator * (const Macierz & W) const; //OK bez & macierz razy macierz
  const Wektor  operator * (const Wektor & W) const;//OK bez & macierz razy wektor
  
  const Macierz  transpozycja() const;//OK bez &
  const Macierz & odwrotnosc() const;//wzor i wyznacznik ?
  
  double Wyznacznik() const;//wzor ? 
};

std::istream& operator >> (std::istream &Strm, Macierz &Mac);//OK

std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);//OK


#endif
