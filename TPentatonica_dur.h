#ifndef TPENTA_DUR_H_
#define TPENTA_DUR_H_

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TGama_dur.h"


class TPentatonica_dur :public TGama_dur
{
public:

    vector<int> pent{2,2,3,2};
    int gama;
    vector<string> penta_dur;


public:

    void wyswietl_rodzaj_gamy();

    void wyswietl_tonacje_sharp();

    void wyswietl_tonacje_flat();

    void wyswietl_nazwe_gamy_skali(string nazwa);
};
#endif
