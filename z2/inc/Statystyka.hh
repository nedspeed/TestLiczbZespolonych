#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH

/*!
 *  Plik zawiera definicje strukture Statystyka oraz deklaracje
 *  funkcji odpowiadajacej za statystyki dzialajacej na tej
 *  strukturze.
 */

/*!
 * Pojecie odpowiedzi
 */
struct Statystyka
{
    double popr = 0; /*! Pole reprezentuje liczbe poprawnych odpowiedzi */
    double niepopr = 0; /*! Pole reprezentuje liczbe niepoprawnych odpowiedzi */
    double procent = 0.0;
};

void Odpowiedz (Statystyka odpowiedz);
void Zwieksz (int n, Statystyka & stat);
#endif