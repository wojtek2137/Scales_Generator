#ifndef TALTER_H_
#define TALTER_H_

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TGama_dur.h"

class TAlterowana :public TGama_dur
{

public:
    vector <int> alterow{1,2,1,2,2,2,2};
    int gama;
    vector<string> alt;

    ///METODY
    void wyswietl_rodzaj_gamy();

    void wyswietl_nazwe_gamy_skali(string nazwa);

    void wyswietl_tonacje_sharp();

    void wyswietl_tonacje_flat();

};
#endif
