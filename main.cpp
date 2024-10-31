#include <iostream>
using namespace std;

int main() {
    int i;
    float lvl, somma, media;

    somma=0;

    for (i=1; i<=7; i++)
    {
        cout<<"Inserire il livello dell'acqua"<<endl;
        cin>>lvl;

        if (lvl>10)
        {
        
        cout<<"Nel giorno " <<i<< " l'acqua è alta"<<endl;

        }

        somma=lvl+somma;
    }

    media=somma/7;

    if (media>0)
    {
        cout<<"Acqua alta"<<endl;
    }

    if (media<=0)
    {
        cout<<"Livello normale"<<endl;
    }
}