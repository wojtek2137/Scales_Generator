#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TPentatonica_moll.h"

using namespace std;

//METODY
    void TPentatonica_moll::wyswietl_rodzaj_gamy()
    {
        cout<<endl;
        cout<<endl<<"Wybierz rodzaj gam, z ktorych chcesz uzyskac pentatonike mollowa, wciskajac: "<<endl;
        cout<<"(0) Bemolowe"<<endl;
        cout<<"(1) Krzyzykowe "<<endl;

    }

    void TPentatonica_moll::wyswietl_tonacje_sharp()
    {
        cout<<"Wybierz tonacje mollowa, dla ktorej chcesz  wygenerowac pentatonike, wciskajac odpowiedni numer: "<<endl;

       for(int i=0; i<menu_sharp_moll.size(); i++)
    {

        cout<<"("<<i+1<<") "<<"Pentatonika "<< menu_sharp_moll[i]<<endl;
    }

    }

    void TPentatonica_moll::wyswietl_tonacje_flat()
    {
        cout<<"Wybierz tonacje mollowa, dla ktorej chcesz  wygenerowac pentatonike, wciskajac odpowiedni numer: "<<endl;

       for(int i=0; i<menu_flat_moll.size(); i++)
    {

        cout<<"("<<i+1<<") "<<"Pentatonika "<< menu_flat_moll[i]<<endl;
    }

    }


    void TPentatonica_moll::wyswietl_nazwe_gamy_skali(string nazwa)
    {
        cout<<"Dzwieki pentatoniki "<<nazwa_gamy<<": "<<endl;
    }
