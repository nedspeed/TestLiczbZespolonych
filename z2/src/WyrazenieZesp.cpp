#include "WyrazenieZesp.hh"
#include "Wczytaj.hh"

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
LZespolona Oblicz(WyrazenieZesp  WyrZ)
{

}

void Wyswietl(WyrazenieZesp  WyrZ)
{
    wyswietl(WyrZ.Arg1)
std::cout << WyrZ.Op;
wyswietl(WyrZ.Arg2)
}

pool get(WyrazenieZesp &WyrZ)
{
    char znak;
    get(WyrZ.Arg1);
    std::cin >> znak;
    get(WyrZ.Arg2);
    WyrZ.Op = getoperator(znak);
}