#include "THeadRing.h"

THeadRing::THeadRing(): TDatList()
{
    pHead = new TDatLink(NULL, NULL);
    pHead->SetNextLink(pHead);
    pFirst = pLast = pCurrLink = pPrevLink = pStop = pHead;
}

THeadRing::~THeadRing()
{
    DelLink(pHead);
}

void THeadRing::InsFirst ( PTDatValue pVal )
{
    if (IsEmpty())
    {
        pFirst = new TDatLink(pVal, pStop);
        pHead->SetNextLink(pFirst);
        pLast = pCurrLink = pPrevLink = pFirst;
        CurrPos = 0;
    }
    else
    {
        pFirst = new TDatLink(pVal, pFirst);
        pHead->SetNextLink(pFirst);
        ++CurrPos;
        if (CurrPos == 1)
        {
            pPrevLink = pFirst;
        }
    }
    ++ListLen;
}

void THeadRing::DelFirst( void )
{
    if (IsEmpty())
        return;
    else
    {
        PTDatLink p = (PTDatLink)pFirst->GetNextLink();
        DelLink(pFirst);
        pFirst = p;
        --ListLen;
        --CurrPos;
        if (CurrPos == 0)
        {
            pPrevLink = p;
        }
        else if (CurrPos == -1)
        {
            pPrevLink = p;
            pCurrLink = p;
            CurrPos = 0;
        }
        if (ListLen == 0)
        {
            pLast = pStop;
            pHead->SetNextLink(pHead);
        }
    }
}
