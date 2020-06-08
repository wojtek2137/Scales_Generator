#ifndef TPENTA_MOLL_H_
#define TPENTA_MOLL_H_

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TGama_moll.h"



class TPentatonica_moll :public TGama_moll
{
public:

    vector<int> pent{3,2,2,3};
    int gama;
    vector<string> penta_moll;


public:

    void wyswietl_rodzaj_gamy();

    void wyswietl_tonacje_sharp();

    void wyswietl_tonacje_flat();


    void wyswietl_nazwe_gamy_skali(string nazwa);


};
#endif
