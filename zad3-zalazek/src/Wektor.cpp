#include "Wektor.hh"
#include <cmath>

/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Wektor, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

double & Wektor::operator[] (int indeks) {
    if (indeks < 0 || indeks >= ROZMIAR) {
      std::cerr << "blad: zly indeks wektora";
      exit(1);
    }
    //return this->dane[indeks];//lub
    return dane[indeks];
  }

std::istream& operator >> (std::istream &Strm, Wektor &Wek)
{
  Strm>>Wek[0];
  Strm>>Wek[1];
  Strm>>Wek[2];
  return Strm;
}

std::ostream& operator << (std::ostream &Strm, const Wektor &Wek)
{
  // Strm<<Wek[0]<<Wek[1]<<Wek[2];
  return Strm;
}

double dlugosc()
{
  double Wynik;
  //Wynik=sqrt(this[0]*this[1]+this[1]*this[1]+this[2]*[2]);
  return Wynik;
}

double operator * (const Wektor & W2)
{
  double Wynik;
  //Wynik=this[0]*W2[0]+this[1]*W2[1]+this[2]*W2[2];
  return Wynik;
}

const Wektor & operator + (const Wektor & W2)
{
  Wektor Wynik;
  Wynik[0]=this[0]+W2[0];
  Wynik[1]=this[1]+W2[1];
  Wynik[2]=this[2]+W2[2];
  return Wynik;
}

const Wektor & operator - (const Wektor & W2)
{
  Wektor Wynik;
  Wynik[0]=this[0]-W2[0];
  Wynik[1]=this[1]-W2[1];
  Wynik[2]=this[2]-W2[2];
  return Wynik;
}

Wektor iloczyn_wektorowy (Wektor & W1,Wektor & W2)
{
  Wektor Wynik;
  Wynik[0]=W1[1]*W2[2]-W1[2]*W2[1];
  Wynik[1]=W1[2]*W2[0]-W1[0]*W2[2];
  Wynik[2]=W1[0]*W2[1]-W1[1]*W2[0];
  return Wynik;
}
