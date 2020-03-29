#include <iostream>
#include <cmath>
#include "BazaTestu.hh"
#include "LZespolona.hh"
#include "Statystyka.hh"

using std::cout;
using std::cerr;
using std::endl;


int main(int argc, char **argv)
{
LZespolona odpowiedz, popr;
Statystyka stat;
int n;

  if (argc < 2) {
    std::cout << std::endl;
    std::cout << " Brak opcji okreslajacej rodzaj testu." << std::endl;
    std::cout << " Dopuszczalne nazwy to:  latwy, trudny." << std::endl;
    std::cout << std::endl;
    return 1;
  }


  BazaTestu BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    std::cerr << " Inicjalizacja testu nie powiodla sie." << std::endl;
    return 1;
  }


  
  std::cout << std::endl;
  std::cout << " Start testu arytmetyki zespolonej: " << argv[1] << std::endl;
  std::cout << std::endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)){
        std::cout << "Podaj wynik operacji:";
        Wyswietl(WyrZ_PytanieTestowe);
        std::cout << "Twoja odpowiedz:";
        std::cin >> odpowiedz;
        popr = Oblicz(WyrZ_PytanieTestowe);
        n = Sprawdz(odpowiedz, popr);       //sprawdzamy czy odpowiedz poprawna
        Zwieksz(n, stat);               //aktualizujemy statystyke
    }

  
  std::cout << std::endl;
  std::cout << " Koniec testu" << std::endl;
  std::cout << std::endl;
Odpowiedz(stat);        //wyswietlamy statystyke
return 0;
}
