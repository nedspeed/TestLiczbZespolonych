#include <iostream>
#include <cmath>
#include "Statystyka.hh"
using std::cout;
using std::endl;

/*!
 *Funkcja odpowiada za statystyki odpowiedzi
 *Parametr:
 *      odp- zmienna przechowujaca ilosc dobrych i zlych odpowiedzi
 */

void Odpowiedz (Statystyka odp)
{
    odp.procent = (odp.popr/(odp.popr + odp.niepopr))*100;
    std::cout << "Ilosc dobrych odpowiedzi:" << odp.popr << std::endl;
    std::cout << "Ilosc blednych odpowiedzi:" << odp.niepopr << std::endl;
    std::cout << "Wynik procentowy poprawnych odpowiedzi:" << odp.procent << "%" << std::endl;
}

/*!
 *Funkcja odpowiada za aktualizacje liczby poprawnych i niepoprawnych odpowiedzi
 *  Argumenty wejsciowe:
 *      n - zmienna przechowujaca wartosc zwrocona przez funkcje Sprawdz
 *      &stat - referencja ze zmiennej przechowujacej dane do statystyki 
 *  Argumenty wej
 *  Parametr:
 *      odp - zmienna przechowujaca ilosc dobrych i zlych odpowiedzi
 */
void Zwieksz (int n, Statystyka & stat)
{
    if (n == 0){
            stat.popr += 1;
        }
        else
        {
            std::cout << "Poprawna odpowiedz:";
            std::cout << stat.popr;
            std::cout << std::endl;
            stat.niepopr += 1;
        }
        std::cout << std::endl;
}

