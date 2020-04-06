#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include "Macierz.hh"

class UkladRownanLiniowych {
  Macierz A;
  Wektor B;
  public:
  UkladRownanLiniowych(){};
  UkladRownanLiniowych(Macierz AA, Wektor BB) : A(AA), B(BB) {} ;
  
  Wektor Oblicz() const; //Oblicz Metoda Cramera
  
  void zmien_macierz( const Macierz & AA);
  const Macierz & wez_macierz() const;
  void zmien_wektor(const Wektor & BB);
  const Wektor & wez_wektor()const; 
};

std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);

std::ostream& operator << (std::ostream &Strm, const UkladRownanLiniowych &UklRown);

#endif
