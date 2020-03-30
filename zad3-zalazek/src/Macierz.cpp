#include "Macierz.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
std::istream& operator >> (std::istream &Strm, Macierz &Mac)
{
  Strm>>Mac[x];
  Strm>>Mac[y];
  Strm>>Mac[z];
  return Strm;
}

std::ostream& operator << (std::ostream &Strm, const Macierz &Mac)
{
  Strm<<Mac[x]<<Mac[y]<<Mac[z];
  return Strm;
}

const Macierz & operator + (const Macierz & W)
{
  Macierz Wynik;
  Wynik[x][0]=this[x][0]+W[x][0];
  Wynik[x][1]=this[x][1]+W[x][1];
  Wynik[x][2]=this[x][2]+W[x][2];
  Wynik[y][0]=this[y][0]+W[y][0];
  Wynik[y][1]=this[y][1]+W[y][1];
  Wynik[y][2]=this[y][2]+W[y][2];
  Wynik[z][0]=this[z][0]+W[z][0];
  Wynik[z][1]=this[z][1]+W[z][1];
  Wynik[z][2]=this[z][2]+W[z][2];
  return Wynik;
  
}

const Macierz & operator - (const Macierz & W)
{
  Macierz Wynik;
  Wynik[x][0]=this[x][0]-W[x][0];
  Wynik[x][1]=this[x][1]-W[x][1];
  Wynik[x][2]=this[x][2]-W[x][2];
  Wynik[y][0]=this[y][0]-W[y][0];
  Wynik[y][1]=this[y][1]-W[y][1];
  Wynik[y][2]=this[y][2]-W[y][2];
  Wynik[z][0]=this[z][0]-W[z][0];
  Wynik[z][1]=this[z][1]-W[z][1];
  Wynik[z][2]=this[z][2]-W[z][2];
  return Wynik;
}

const Macierz & operator * (const Macierz & W)
{
 Macierz Wynik;
 Wynik[x][0]=this[x][0]*W[x][0]+this[x][1]*W[y][0]+this[x][2]*W[z][0];
 Wynik[x][1]=this[x][1]*W[x][0]+this[x][1]*W[y][0]+this[x][2]*W[z][0];
 Wynik[x][2]=this[x][2]*W[x][0]+this[x][1]*W[y][0]+this[x][2]*W[z][0];
 Wynik[y][0]=this[x][0]*W[x][0]+this[x][1]*W[y][0]+this[x][2]*W[z][0];
 Wynik[y][1]=this[x][1]*W[x][0]+this[x][1]*W[y][0]+this[x][2]*W[z][0];
 Wynik[y][2]=this[x][2]*W[x][0]+this[x][1]*W[y][0]+this[x][2]*W[z][0];
 Wynik[z][0]=this[x][0]*W[x][0]+this[x][1]*W[y][0]+this[x][2]*W[z][0];
 Wynik[z][1]=this[x][1]*W[x][0]+this[x][1]*W[y][0]+this[x][2]*W[z][0];
 Wynik[z][2]=this[x][2]*W[x][0]+this[x][1]*W[y][0]+this[x][2]*W[z][0];`
 return Wynik;
}

const Wektor & operator * (const Wektor & W)
{
  Wektor Wynik;
  Wynik[0]=this[x][0]*W[0]+this[x][1]*W[1]+this[x][2]*W[2];
  Wynik[1]=this[y][0]*W[0]+this[y][1]*W[1]+this[y][2]*W[2];
  Wynik[2]=this[z][0]*W[0]+this[z][1]*W[1]+this[z][2]*W[2];
  rerurn Wynik;
}

const Macierz & transpozycja()
{
  Macierz Wynik;
  Wynik[x][0]=this[x][0];
  Wynik[x][1]=this[y][0];
  Wynik[x][2]=this[z][0];
  Wynik[y][0]=this[x][1];
  Wynik[y][1]=this[y][1];
  Wynik[y][2]=this[z][1];
  Wynik[z][0]=this[x][2];
  Wynik[z][1]=this[y][2];
  Wynik[z][2]=this[z][2];
  return Wynik;
}

const Macierz & odwrotnosc()
{

}

double Wyznacznik()
{
  double Wynik;
  Wynik=this[0][2]*this[1][1]*this[0][0]+this[0][0]*this[1][2]*[2][1]+this[0][1]*this[1][0]*this[2][2];
  return Wynik;
}

const Wektor & operator[] (int indeks)
{

}

Wektor & operator[] (int indeks)
{

}
