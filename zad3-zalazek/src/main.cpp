#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"

using namespace std;

int main()
{
  cout << endl << " Start programu " << endl << endl;
  Wektor W,W4;
  W[0] = 1;
  W[1] = 3;
  W[2] = 2;
  cout << W;
  cout << "wpisz wartosci" << endl;
  cin >> W4;
  cout << endl;
  
  cout << W4;
  cout << "dlugosc: " << W4.dlugosc() << endl;
  cout << "iloczyn skalarny: " << W * W4 << endl;
}
