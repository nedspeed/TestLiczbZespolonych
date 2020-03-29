#include "WyrazenieZesp.hh"
#include "LZespolona.hh"
using std::cin;
using std::cout;
using std::endl;
/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

/*
* Realizuje wyswietlenie wyrazenia zespolonego.
* Argumenty:
*    WyrZ  - argument, ktory funkcja ma wyswietlic,
*/
void Wyswietl(WyrazenieZesp WyrZ){
    std::cout << WyrZ.Arg1;
    switch(WyrZ.Op)
    {
        case 0: std::cout <<"+"; break;
        case 1: std::cout <<"-"; break;
        case 2: std::cout <<"*"; break;
        case 3: std::cout <<"/"; break;
    }
    std::cout << WyrZ.Arg2;
    std::cout << "=" << std::endl;
}

/*
* Realizuje obliczenie wyrazenia zespolonego.
* Argumenty:
*    WyrZ  - argument(wyrazenie), ktory funkcja ma obliczyc,
*       Funkcja zwraca obliczone wyrazenie jako wynik.
*/
LZespolona Oblicz(WyrazenieZesp  WyrZ){
    LZespolona wynik;
    switch(WyrZ.Op)
    {
        case Op_Dodaj:
            {
                wynik = WyrZ.Arg1 + WyrZ.Arg2;
            }
            break;
        case Op_Odejmij:
            {
                wynik = WyrZ.Arg1 - WyrZ.Arg2;
            }
            break;
        case Op_Mnoz:
            {
                wynik = WyrZ.Arg1 * WyrZ.Arg2;
            }
            break;
        case Op_Dziel:
            {
                wynik = WyrZ.Arg1 / WyrZ.Arg2;
            }
            break;
        default: std::cout << "Blad. Operacja nie udala sie" << std::endl;
    }
return wynik;
}
