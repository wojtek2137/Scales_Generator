#ifndef TGAMA_H_
#define TGAMA_H_

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TTonacja.h"

using namespace std;

class TGama_dur :public TTonacja
{

public:

    vector <string> menu_sharp {  "C-dur  ","G-dur ","D-dur ","A-dur ",
        "E-dur ","B-dur ","F#-dur","C#-dur "};

    vector<string> menu_flat {"C-dur ","F-dur  ","Bb-dur ","Eb-dur ",
         "Ab-dur ","Db-dur ","Gb-dur ","Cb-dur "};

    vector<int> dur{2,2,1,2,2,2};
    int gama;
    vector<string> dur_gama;

///METODY

    void wyswietl_rodzaj_gamy();

    void wybor_tonacji (int rodzaj);

    void wyswietl_tonacje_sharp();


    void wyswietl_tonacje_flat();


    void wyswietl_nazwe_gamy_skali(string nazwa);


    void generuj_skale(unordered_map<int,string> M,vector<int> A, vector<string> &R);


};
#endif // TGAMA_H_
