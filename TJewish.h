#ifndef TJEWISH_H_
#define TJEWISH_H_

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TGama_dur.h"


class TJewish :public TGama_dur
{
public:
    vector <int> jewish{1,3,1,2,1,2,2};
    int gama;
    vector<string> zydow;

    ///METODY
    void wyswietl_rodzaj_gamy();

    void wyswietl_nazwe_gamy_skali(string nazwa);

    void wyswietl_tonacje_sharp();

    void wyswietl_tonacje_flat();

};
#endif
