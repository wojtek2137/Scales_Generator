#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TTonacja.h"
#include "TGama_dur.h"
#include "TGama_moll.h"
#include "TPentatonica_dur.h"
#include "TPentatonica_moll.h"
#include "TBluesowa.h"
#include "TJewish.h"
#include "TZmniejszona.h"
#include "TAlterowana.h"

using namespace std;


void menu_glowne_wyswietl()
{
    vector <string> menu {"Gama durowa ","Gama mollowa ","Pentatonika durowa ","Pentatonika mollowa ",
                          "Skala bluesowa ","Skala zmniejszona ","Skala alterowana ","Skala zydowska "};

    cout<<"Wybierz co chcesz wygenerowac wprowadzajac odpowiednia cyfre z klawiatury."<<endl;

    for(int i=0; i<menu.size(); i++)
    {
        cout<<"("<<i+1<<") "<< menu[i]<<endl;
    }

    cout<<endl<<"(0) Zamknij program"<<endl;
}


int main()
{

    TGama_dur gama1;
    TGama_moll gama2;
    TPentatonica_dur pentatonika1;
    TPentatonica_moll pentatonika2;
    TBluesowa bluesowa;
    TZmniejszona zmniejszona;
    TAlterowana alterowana;
    TJewish zydowska;

    TTonacja *wsk;
    int wybor_menu;
    int wybierz_rodzaj;

    for(;;)
    {

        menu_glowne_wyswietl();
        cin>>wybor_menu;

        switch(wybor_menu)
        {



        case 1:
            wsk = &gama1;
            wsk -> wyswietl_rodzaj_gamy();
            cin>>wybierz_rodzaj;
            wsk -> wybor_tonacji(wybierz_rodzaj);
            wsk -> wyswietl_nazwe_gamy_skali(gama1.TGama_dur::nazwa_gamy);
            wsk -> generuj_skale(gama1.TGama_dur::klucze,gama1.TGama_dur::dur,gama1.TGama_dur::dur_gama);
            break;



        case 2:
            wsk = &gama2;
            wsk -> wyswietl_rodzaj_gamy();
            cin>>wybierz_rodzaj;
            wsk -> wybor_tonacji(wybierz_rodzaj);
            wsk -> wyswietl_nazwe_gamy_skali(gama2.TGama_moll::nazwa_gamy);
            wsk -> generuj_skale(gama2.TGama_moll::klucze,gama2.TGama_moll::moll,gama2.TGama_moll::moll_gama);
            break;

        case 3:
            wsk = &pentatonika1;
            wsk -> wyswietl_rodzaj_gamy();
            cin>>wybierz_rodzaj;
            wsk -> wybor_tonacji(wybierz_rodzaj);
            wsk -> wyswietl_nazwe_gamy_skali(gama1.TGama_dur::nazwa_gamy);
            wsk -> generuj_skale(pentatonika1.TTonacja::klucze,pentatonika1.TPentatonica_dur::pent,pentatonika1.TPentatonica_dur::penta_dur);
            break;

        case 4:
            wsk = &pentatonika2;
            wsk -> wyswietl_rodzaj_gamy();
            cin>>wybierz_rodzaj;
            wsk -> wybor_tonacji(wybierz_rodzaj);
            wsk -> wyswietl_nazwe_gamy_skali(gama2.TGama_moll::nazwa_gamy);
            wsk -> generuj_skale(pentatonika2.TTonacja::klucze,pentatonika2.TPentatonica_moll::pent,pentatonika2.TPentatonica_moll::penta_moll);
            break;

        case 5:
            wsk = &bluesowa;
            wsk -> wyswietl_rodzaj_gamy();
            cin>>wybierz_rodzaj;
            wsk -> wybor_tonacji(wybierz_rodzaj);
            wsk -> generuj_skale(bluesowa.TTonacja::klucze,bluesowa.TBluesowa::blues,bluesowa.TBluesowa::bluesow);
            break;

        case 6:
            wsk = &zmniejszona;
            wsk -> wyswietl_rodzaj_gamy();
            cin>>wybierz_rodzaj;
            wsk -> wybor_tonacji(wybierz_rodzaj);
            wsk -> wyswietl_nazwe_gamy_skali(zmniejszona.TGama_dur::nazwa_gamy);
            wsk -> generuj_skale(zmniejszona.TTonacja::klucze,zmniejszona.TZmniejszona::dimished,zmniejszona.TZmniejszona::zmniej);
            break;

        case 7:
            wsk = &alterowana;
            wsk -> wyswietl_rodzaj_gamy();
            cin>>wybierz_rodzaj;
            wsk -> wybor_tonacji(wybierz_rodzaj);
            wsk -> wyswietl_nazwe_gamy_skali(alterowana.TGama_dur::nazwa_gamy);
            wsk -> generuj_skale(alterowana.TTonacja::klucze,alterowana.TAlterowana::alterow,alterowana.TAlterowana::alt);
            break;

        case 8:
            wsk = &zydowska;
            wsk -> wyswietl_rodzaj_gamy();
            cin>>wybierz_rodzaj;
            wsk -> wybor_tonacji(wybierz_rodzaj);
            wsk -> wyswietl_nazwe_gamy_skali(zydowska.TGama_dur::nazwa_gamy);
            wsk -> generuj_skale(zydowska.TTonacja::klucze,zydowska.TJewish::jewish,zydowska.TJewish::zydow);
            break;


        case 0:

            exit(0);
            break;


        default:
            cout<<"Nie ma takiej liczby w menu!!!"<<endl;


        }


        getchar();
        getchar();

        system("cls");

    }

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


