#ifndef TTONACJA_H_  /// if procesora przed kompilacja
#define TTONACJA_H_

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class TTonacja
{
    ///ATRYBUTY
public:

    unordered_map<int,string> klucze1 = {{1,"C"},{2,"C#"},{3,"D"},{4,"D#"},
                                                                    {5,"E"},{6,"F"},{7,"F#"},{8,"G"},
                                                                    {9,"G#"},{10,"A"},{11,"A#"},{12,"B"}
    };

    unordered_map<int,string> klucze2 = {{1,"C"},{2,"Db"},{3,"D"},{4,"Eb"},
                                                                    {5,"Fb"},{6,"F"},{7,"Gb"},{8,"G"},
                                                                    {9,"Ab"},{10,"A"},{11,"Bb"},{12,"Cb"}
    };

    int  pryma,wybor;
    string nazwa_gamy;
    unordered_map<int,string> klucze;


///METODY

    virtual void wyswietl_rodzaj_gamy();

    virtual void wybor_tonacji(int);

    virtual void wyswietl_tonacje_sharp();

    virtual void wyswietl_tonacje_flat();

    virtual void wyswietl_nazwe_gamy_skali(string nazwa);

    virtual void gamy_sharp(int);

    virtual void gamy_flat(int);

    virtual void generuj_skale(unordered_map<int,string> M,vector<int> A, vector<string> &R);


};
#endif
