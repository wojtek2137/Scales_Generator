#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include "TGama_dur.h"

using namespace std;



///METODY

void  TGama_dur:: wyswietl_rodzaj_gamy()
{

    cout<<endl<<"Wybierz rodzaj gam wciskajac: "<<endl;
    cout<<"(0) Bemolowe"<<endl;
    cout<<"(1) Krzyzykowe "<<endl;
}

void TGama_dur::wybor_tonacji (int rodzaj)
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
            nazwa_gamy=("C-dur");
            wybor=1;
            pryma=wybor;

            break;

        case 2:
            nazwa_gamy=("G-dur");
            wybor=8;
            pryma=wybor;

            break;


        case 3:
            nazwa_gamy=("D-dur");
            wybor=3;
            pryma=wybor;

            break;

        case 4:
            nazwa_gamy=("A-dur");
            wybor=10;
            pryma=wybor;

            break;

        case 5:
            nazwa_gamy=("E-dur");
            wybor=5;
            pryma=wybor;

            break;

        case 6:
            nazwa_gamy=("B-dur");
            wybor=12;
            pryma=wybor;

            break;

        case 7:
            nazwa_gamy=("F#-dur");
            wybor=7;
            pryma=wybor;
            klucze1[6]="E#"; ///enharmonia

            break;

        case 8:
            nazwa_gamy=("C#-dur");
            wybor=2;
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

            nazwa_gamy=("C-dur");
            wybor=1;
            pryma=wybor;
            klucze2[12]="B";///enharmonia
            klucze2[5]="E";///enharmonia

            break;

        case 2:
            nazwa_gamy=("F-dur");
            wybor=6;
            pryma=wybor;
            klucze2[5]="E";///enharmonia

            break;


        case 3:
            nazwa_gamy=("Bb-dur");
            wybor=11;
            pryma=wybor;

            break;

        case 4:
            nazwa_gamy=("Eb-dur");
            wybor=4;
            pryma=wybor;

            break;

        case 5:
            nazwa_gamy=("Ab-dur");
            wybor=9;
            pryma=wybor;

            break;

        case 6:
            nazwa_gamy=("Db-dur");
            wybor=2;
            pryma=wybor;

            break;

        case 7:
            nazwa_gamy=("Gb-dur");
            wybor=7;
            pryma=wybor;
            ///enharmonia

            break;

        case 8:
            nazwa_gamy=("Cb-dur");
            wybor=12;
            pryma=wybor;


            break;

        default:
            cout<<"Nie ma takiej gamy bemolowej! "<<endl;
        }

        klucze=klucze2;
    }

}

void TGama_dur::wyswietl_tonacje_sharp()
{

    cout<<"Wybierz tonacje durowa wciskajac odpowiedni numer: "<<endl;

    for(int i=0; i<menu_sharp.size(); i++)
    {

        cout<<"("<<i+1<<") "<< menu_sharp[i]<<endl;
    }


}


void TGama_dur::wyswietl_tonacje_flat()
{
       cout<<"Wybierz tonacje durowa wciskajac odpowiedni numer: "<<endl;

    for(int i=0; i<menu_flat.size(); i++)
    {

        cout<<"("<<i+1<<") "<< menu_flat[i]<<endl;
    }

}



void TGama_dur::wyswietl_nazwe_gamy_skali(string nazwa)
{
    cout<<"Dzwieki gamy "<<nazwa_gamy<<": "<<endl;
}



void TGama_dur::generuj_skale(unordered_map<int,string> M,vector<int> A, vector<string> &R)
{

///M-mapa/// A-vector z interwalami w skali///R- vector wynikow
    for(int i=0; i<=A.size(); i++)
    {

        if (pryma<=12)
        {

            R.push_back(M[pryma]);
            pryma=pryma + A[i];

        }

        if (pryma>12)
        {

            pryma=pryma-12; ///pryma-12(pryma minus wielkosc mapy)

        }

        cout<<R[i]<<" ";

    }

    R.erase(R.begin(),R.end());
}
