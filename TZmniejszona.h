#ifndef TDIMISH_H_
#define TDIMISH_H_

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TGama_dur.h"


class TZmniejszona :public TGama_dur
{
public:
    vector <int> dimished{1,2,1,2,1,2,1,2};
    int gama;
    vector<string> zmniej;

    ///METODY
    void wyswietl_rodzaj_gamy();

    void wyswietl_nazwe_gamy_skali(string nazwa);

    void wyswietl_tonacje_sharp();

    void wyswietl_tonacje_flat();

};
#endif
