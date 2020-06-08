#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TJewish.h"



    ///METODY
    void TJewish::wyswietl_rodzaj_gamy()
    {
        cout<<endl;
        cout<<endl<<"Wybierz w jakich znakach chcesz wygenerowac skale zydowska ( jewish scale ) "<<endl;
        cout<<"(0) Bemolowe"<<endl;
        cout<<"(1) Krzyzykowe "<<endl;

    }


     void TJewish::wyswietl_nazwe_gamy_skali(string nazwa)
    {
        cout<<"Dzwieki skali zydowskiej ( jewish scale )"<<endl;
    }

     void TJewish::wyswietl_tonacje_sharp()
    {
        cout<<"Wybierz akord, dla ktorego chcesz  wygenerowac skale zydowska, wciskajac odpowiedni numer: "<<endl;
        cout<<"(1).C7 "<<endl;
        cout<<"(2).G7"<<endl;
        cout<<"(3).D7 "<<endl;
        cout<<"(4).A7 "<<endl;
        cout<<"(5).E7 "<<endl;
        cout<<"(6).B7 "<<endl;
        cout<<"(7).F#7 "<<endl;
        cout<<"(8).C#7 "<<endl;
    }

     void TJewish::wyswietl_tonacje_flat()
    {
        cout<<"Wybierz akord, dla ktorego chcesz  wygenerowac skale zydowska, wciskajac odpowiedni numer: "<<endl;
        cout<<"(1).C7 "<<endl;
        cout<<"(2).F7 "<<endl;
        cout<<"(3).Bb7 "<<endl;
        cout<<"(4).Eb7 "<<endl;
        cout<<"(5).Ab7 "<<endl;
        cout<<"(6).Db7 "<<endl;
        cout<<"(7).Gb7 "<<endl;
        cout<<"(8).Cb7 "<<endl;
    }

