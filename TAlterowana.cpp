#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TAlterowana.h"

///METODY
   void  TAlterowana::wyswietl_rodzaj_gamy()
    {
        cout<<endl;
        cout<<endl<<"Wybierz w jakich znakach chcesz wygenerowac skale alterowana "<<endl;
        cout<<"(0) Bemolowe"<<endl;
        cout<<"(1) Krzyzykowe "<<endl;

    }


    void TAlterowana::wyswietl_nazwe_gamy_skali(string nazwa)
    {
        cout<<"Dzwieki skali alterowanej "<<endl;
    }

    void TAlterowana::wyswietl_tonacje_sharp()
    {
        cout<<"Wybierz akord, dla ktorego chcesz  wygenerowac skale alterowana, wciskajac odpowiedni numer: "<<endl;
        cout<<"(1).C7 "<<endl;
        cout<<"(2).G7"<<endl;
        cout<<"(3).D7 "<<endl;
        cout<<"(4).A7 "<<endl;
        cout<<"(5).E7 "<<endl;
        cout<<"(6).B7 "<<endl;
        cout<<"(7).F#7 "<<endl;
        cout<<"(8).C#7 "<<endl;
    }

    void TAlterowana::wyswietl_tonacje_flat()
    {
        cout<<"Wybierz akord, dla ktorego chcesz  wygenerowac skale alterowana, wciskajac odpowiedni numer: "<<endl;
        cout<<"(1).C7 "<<endl;
        cout<<"(2).F7 "<<endl;
        cout<<"(3).Bb7 "<<endl;
        cout<<"(4).Eb7 "<<endl;
        cout<<"(5).Ab7 "<<endl;
        cout<<"(6).Db7 "<<endl;
        cout<<"(7).Gb7 "<<endl;
        cout<<"(8).Cb7 "<<endl;
    }


