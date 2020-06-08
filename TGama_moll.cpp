#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TGama_moll.h"




///METODY
void TGama_moll::wyswietl_tonacje_sharp()
{
    cout<<"Wybierz tonacje mollowa wciskajac odpowiedni numer: "<<endl;

    for(int i=0; i<menu_sharp_moll.size(); i++)
    {

        cout<<"("<<i+1<<") "<< menu_sharp_moll[i]<<endl;
    }


}


void TGama_moll::wyswietl_tonacje_flat()
{

    cout<<"Wybierz tonacje mollowa wciskajac odpowiedni numer: "<<endl;

   for(int i=0; i<menu_flat_moll.size(); i++)
    {

        cout<<"("<<i+1<<") "<< menu_flat_moll[i]<<endl;
    }

}


void TGama_moll::wybor_tonacji(int rodzaj)
{

    if ((rodzaj!=0)&&(rodzaj!=1))
    {
        cout<<"Error! Zly klawisz!"<<endl;
    }

    else if(rodzaj==1)
    {
        wyswietl_tonacje_sharp();
        klucze=klucze2;
        cin>>gama;
        switch(gama)
        {


        case 1:
            nazwa_gamy=("A-moll");
            wybor=10;
            pryma=wybor;

            break;

        case 2:
            nazwa_gamy=("E-moll");
            wybor=5;
            pryma=wybor;

            break;


        case 3:
            nazwa_gamy=("B-moll");
            wybor=12;
            pryma=wybor;

            break;

        case 4:
            nazwa_gamy=("F#-moll");
            wybor=7;
            pryma=wybor;

            break;

        case 5:
            nazwa_gamy=("C#-moll");
            wybor=2;
            pryma=wybor;

            break;

        case 6:
            nazwa_gamy=("G#-moll");
            wybor=9;
            pryma=wybor;

            break;

        case 7:
            nazwa_gamy=("D#-moll");
            wybor=4;
            pryma=wybor;
            klucze1[6]="E#"; ///enharmonia

            break;

        case 8:
            nazwa_gamy=("A#-moll");
            wybor=11;
            pryma=wybor;
            klucze1[6]="E#"; ///enharmonia
            klucze1[1]="B#"; ///enharmonia

            break;

        default:
            cout<<"Nie ma takiej gamy krzyzykowej! "<<endl;
        }

        klucze=klucze1;

    }

    else if (rodzaj==0)
    {
        wyswietl_tonacje_flat();
        klucze=klucze2;
        cin>>gama;
        switch(gama)
        {
        case 1:

            nazwa_gamy=("A-moll");
            wybor=10;
            pryma=wybor;
            klucze2[12]="B";///enharmonia
            klucze2[5]="E";///enharmonia

            break;

        case 2:
            nazwa_gamy=("D-moll");
            wybor=3;
            pryma=wybor;
            klucze2[5]="E";///enharmonia

            break;


        case 3:
            nazwa_gamy=("G-moll");
            wybor=8;
            pryma=wybor;

            break;

        case 4:
            nazwa_gamy=("C-moll");
            wybor=1;
            pryma=wybor;

            break;

        case 5:
            nazwa_gamy=("F-moll");
            wybor=6;
            pryma=wybor;

            break;

        case 6:
            nazwa_gamy=("Bb-moll");
            wybor=11;
            pryma=wybor;

            break;

        case 7:
            nazwa_gamy=("Eb-moll");
            wybor=4;
            pryma=wybor;
            ///enharmonia

            break;

        case 8:
            nazwa_gamy=("Ab-moll");
            wybor=9;
            pryma=wybor;


            break;

        default:
            cout<<"Nie ma takiej gamy bemolowej! "<<endl;
        }

        klucze=klucze2;
    }

}
