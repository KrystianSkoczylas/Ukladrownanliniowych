#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Wektor {
  double dane[ROZMIAR];
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  public:
  Wektor();
  Wektor(double x, double y, double z); //konstruktor od kolekcji
  
  double dlugosc() const;
  double operator * (const Wektor & W2) const;
  const Wektor & operator + (const Wektor & W2) const;
  const Wektor & operator - (const Wektor & W2) const;

  const double & operator[] (int indeks) const;
  double & operator[] (int indeks);  
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
std::istream& operator >> (std::istream &Strm, Wektor &Wek); /*wczytanie wektora*/

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << (std::ostream &Strm, const Wektor &Wek); /*wyswietlenie wektora */

Wektor iloczyn_wektorowy (Wektor & W1,Wektor & W2);

#endif
