#ifndef __TDATLINK__
#define __TDATLINK__
#include "TRootLink.h"

class TDatLink;
typedef TDatLink *PTDatLink;

class TDatLink : public TRootLink {
  protected:
    PTDatValue pValue;  // указатель на объект значения
  public:
    TDatLink ( PTDatValue pVal = NULL, PTRootLink pN = NULL ) :
      TRootLink(pN) {
      pValue = pVal;
    }
    void       SetDatValue ( PTDatValue pVal ) { pValue = pVal; }
    PTDatValue GetDatValue    () { return  pValue;           }
    PTDatLink  GetNextDatLink () { return  (PTDatLink)pNext; }
};

#endif // __TDATLINK__
