#include "LZespolona.hh"



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
  Wynik.re = (Skl1.re * Skl2.re) - (Skl1.im * Skl2.im);
  Wynik.im = (Skl1.re * Skl2.im) + (Skl1.im * Skl2.re);
  return Wynik;
}

LZespolona Sprzezenie(LZespolona Skl2)
{
  LZespolona Wynik;
  Wynik.re = -Skl2.re;
  Wynik.im = -Skl2.im;
  return Wynik;
}

double Modul2(LZespolona Skl2)
{
  double Wynik = sqrt((Skl2.re*Skl2.re)+(Skl2.im*Skl2.im));
  Wynik *= Wynik;
  return Wynik;
}

LZespolona operator / (LZespolona Skl1, LZespolona Skl2)
{
  LZespolona Wynik;
  LZespolona Skl0 = Sprzezenie(Skl2);
  LZespolona Skl = (operator * (Skl1, Skl0));
		    double Skl3 = Modul2(Skl2);
		    Wynik.re = Skl.re/Skl3;
		    Wynik.im = Skl.im/Skl3;
		    return Wynik;
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
