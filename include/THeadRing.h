#ifndef __THEADRING__
#define __THEADRING__
#include "TDatList.h"

class THeadRing : public TDatList{
  protected:
    PTDatLink pHead;     // заголовок, pFirst - звено за pHead
  public:
    THeadRing ();
   ~THeadRing ();
   // вставка звеньев
    virtual void InsFirst( PTDatValue pVal=NULL ); // после заголовка
    // удаление звеньев
    virtual void DelFirst( void );                 // удалить первое звено
};

#endif // __THEADRING__
