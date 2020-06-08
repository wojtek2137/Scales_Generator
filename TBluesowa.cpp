#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TBluesowa.h"

using namespace std;

    void TBluesowa::wyswietl_rodzaj_gamy()
    {
        cout<<endl;
        cout<<endl<<"Wybierz rodzaj gam, z ktorych chcesz uzyskac skale bluesowa, wciskajac: "<<endl;
        cout<<"(0) Bemolowe"<<endl;
        cout<<"(1) Krzyzykowe "<<endl;

    }

    void TBluesowa::wyswietl_tonacje_sharp()
    {
        cout<<"Wybierz tonacje, dla ktorej chcesz  wygenerowac skale bluesowa, wciskajac odpowiedni numer: "<<endl;

      for(int i=0; i<menu_sharp_moll.size(); i++)
    {

        cout<<"("<<i+1<<") "<<"Skala bluesowa "<< menu_sharp_moll[i]<<"/ "<<menu_sharp[i]<<endl;
    }

    }

    void TBluesowa::wyswietl_tonacje_flat()
    {
          cout<<"Wybierz tonacje, dla ktorej chcesz  wygenerowac skale bluesowa, wciskajac odpowiedni numer: "<<endl;

      for(int i=0; i<menu_sharp_moll.size(); i++)
    {

        cout<<"("<<i+1<<") "<<"Skala bluesowa "<< menu_flat_moll[i]<<"/ "<<menu_flat[i]<<endl;
    }

    }
