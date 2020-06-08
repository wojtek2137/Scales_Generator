#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TPentatonica_dur.h"


//METODY
void TPentatonica_dur::wyswietl_rodzaj_gamy()
{
    cout<<endl;
    cout<<endl<<"Wybierz rodzaj gam, z ktorych chcesz uzyskac pentatonike durowa, wciskajac: "<<endl;
    cout<<"(0) Bemolowe"<<endl;
    cout<<"(1) Krzyzykowe "<<endl;

}

void TPentatonica_dur::wyswietl_tonacje_sharp()
{

    cout<<"Wybierz tonacje durowa, dla ktorej chcesz  wygenerowac pentatonike, wciskajac odpowiedni numer: "<<endl;

    for(int i=0; i<menu_sharp.size(); i++)
    {

        cout<<"("<<i+1<<") "<<"Pentatonika "<< menu_sharp[i]<<endl;
    }


}

void TPentatonica_dur::wyswietl_tonacje_flat()
{
    cout<<"Wybierz tonacje durowa, dla ktorej chcesz  wygenerowac pentatonike, wciskajac odpowiedni numer: "<<endl;

    for(int i=0; i<menu_sharp.size(); i++)
    {

        cout<<"("<<i+1<<") "<<"Pentatonika "<< menu_flat[i]<<endl;
    }

}

void TPentatonica_dur::wyswietl_nazwe_gamy_skali(string nazwa)
{
    cout<<"Dzwieki pentatoniki "<<nazwa_gamy<<": "<<endl;
}
