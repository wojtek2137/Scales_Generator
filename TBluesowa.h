#ifndef TBLUES_H_
#define TBLUES_H_

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TGama_moll.h"


class TBluesowa :public TGama_moll
{

public:

    vector<int> blues{3,2,1,1,3};
    int gama;
    vector<string> bluesow;


public:

    void wyswietl_rodzaj_gamy();

    void wyswietl_tonacje_sharp();

    void wyswietl_tonacje_flat();




};
#endif
