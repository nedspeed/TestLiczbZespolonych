#include "LZespolona.hh"
#include "Wczytaj.hh"


/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

LZespolona operator - (LZespolona Skl1, LZespolona Skl2)
{
  LZespolona Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

LZespolona operator * (LZespolona Skl1, LZespolona Skl2)
{
  
  LZespolona Wynik;
  Wynik.re = Skl1.re * Skl2.re;
  Wynik.im - Skl1.im * Skl2.im;
  return Wynik;
}

LZespolona Sprzezenie(LZespolona Skl2)
{
  LZespolona Wynik;
  Wynik.re = -Skl1.re;
  Wynik.im = -Skl1.im;
  return Wynik;
}

double Modul2(LZespolona Skl2)
{
  LZespolona Skl = Sprzezenie(Skl2);
  LZespolona Wynik = operator *(Skl2, Skl);
  return Wynik;
}

LZespolona operator / (LZespolona Skl1, LZespolona Skl2)
{
LZespolona Wynik;
Modul2(Skl2)

}

LZespolona operator / (LZespolona Skl1, double Skl2)
{
  LZespolona Wynik;
  Wynik.re = Skl1.re/Skl2;
  Wynik.im = Skl1.im/Skl2;
  return Wynik;
}

LZespolona utworz(double re, double im)
{
  LZespolona LZ;

  LZ.re = re;
  LZ.im = im;
  return LZ;
}
void wyswietl(LZespolona L1)
{
  std::cout << "(" << L1.re << std::showpos << L1.im << std::noshowpos << "i)";
}

pool get(std::istream &str, LZespolona &L1)
{
  char znak;
  str >> znak;
  if(znak != '(')
  return false;
  std::cin >> L1.re;
  std::cin >> L1.im;
  std::cin >> znak;
  if(znak != 'i')
  return false;
  std:cin >> znak;
  if(znak != ')')
  return false;
  return true
}