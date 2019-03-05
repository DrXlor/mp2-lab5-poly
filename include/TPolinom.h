#ifndef __TPOLINOM__
#define __TPOLINOM__
#include "THeadRing.h"
#include "TMonom.h"
#include <iostream>

class TPolinom : public THeadRing {
  public:
    TPolinom ( int monoms[][2]=NULL, int km=0 ); // конструктор
                     // полинома из массива «коэффициент-индекс»
    TPolinom ( const TPolinom &q);      // конструктор копирования
    PTMonom  GetMonom()  { return (PTMonom)GetDatValue(); }
    TPolinom & operator+( TPolinom &q); // сложение полиномов
    TPolinom & operator=( TPolinom &q); // присваивание

    friend std::ostream& operator<<(std::ostream& out, TPolinom& q);
};

#endif // __TPOLINOM__
