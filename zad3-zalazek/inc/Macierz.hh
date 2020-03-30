#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include <iostream>
#include "Wektor.hh"

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Macierz {
  Wektor tab[ROZMIAR];
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  public:
  Macierz();
  Macierz(Wektor x,Wektor y,Wektor z);
  
  const Macierz & operator + (const Macierz & W) const; 
  const Macierz & operator - (const Macierz & W) const; 
  const Macierz & operator * (const Macierz & W) const; 
  const Wektor & operator * (const Wektor & W) const;

  const Macierz & transpozycja() const;
  const Macierz & odwrotnosc() const;
  
  double Wyznacznik() const;

  const Wektor & operator[] (int indeks) const;
  Wektor & operator[] (int indeks);
  

  
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
   */    
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream& operator >> (std::istream &Strm, Macierz &Mac);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);


#endif
