#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>

#include "Macierz.hh"

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class UkladRownanLiniowych {
  Macierz A;
  Wektor B;
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  public:
  UkladRownanLiniowych();
  UkladRownanLiniowych(Macierz AA, Wektor BB);
  Wektor Oblicz(); // Oblicz_Gauss, Oblicz_Cramer
  void zmien_macierz(Macierz M);
  Macierz wez_macierz();
  void zmien_wektor(Wektor M);
  Wektor wez_wektor();
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
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << ( std::ostream                  &Strm, 
                            const UkladRownanLiniowych    &UklRown
                          );


#endif
