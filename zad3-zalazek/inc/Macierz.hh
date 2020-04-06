#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include <iostream>
#include "Wektor.hh"

class Macierz {
  Wektor tab[ROZMIAR];
  double wyznacznikRekurencyjny(bool wylaczoneWiersze[ROZMIAR], bool wylaczone_kolumny[ROZMIAR]) const;
  int sumujTrue(bool array[ROZMIAR]) const;
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
  
  Macierz  operator + (const Macierz & W) const;//OK bez & bez const
  Macierz  operator - (const Macierz & W) const;//OK bez & bez const
  Macierz  operator * (const Macierz & W) const; //OK bez & macierz razy macierz bez const
  Wektor  operator * (const Wektor & W) const;//OK bez & macierz razy wektor bez const
  
  Macierz  transpozycja() const;//OK bez &
  
  double Wyznacznik() const;//OK
};

std::istream& operator >> (std::istream &Strm, Macierz &Mac);//OK

std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);//OK

#endif
