#ifndef TGAMA_MOLL_H_
#define TGAMA_MOLL_H_

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TGama_dur.h"


class TGama_moll :public TGama_dur
{

public:

    vector <string> menu_sharp_moll {  "A-moll ","E-moll ","B-moll ","F#-moll ",
        "C#-moll ","G#-moll ","D#-moll ","A#-moll "};

    vector <string> menu_flat_moll {  "A-moll ","D-moll ","G-moll ","C-moll ",
        "F-moll ","Bb-moll ","Eb-moll ","Ab-moll "};

    vector<int> moll{2,1,2,2,1,2};
    int gama;
    vector<string> moll_gama;

    void wyswietl_tonacje_sharp();

    void wyswietl_tonacje_flat();

    void wybor_tonacji(int rodzaj);

};
#endif
