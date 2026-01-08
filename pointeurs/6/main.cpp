#include <iostream>

#include "fonction.h"

using namespace std;

int main() {
    unsigned int nb_c;
    unsigned int longueur, longueur2;

    cout<<"Quel est le nombre maximal de caracteres a saisir";
    cin>>nb_c;

    char* p_str=new char[nb_c+1];
    cout<<"Saisir votre chaine:";
    cin>>p_str;
    longueur = Longueur_chaine(p_str);
    cout<<"longueur : "<<longueur<<endl;

    char* p_str2=new char[nb_c+1];
    cout<<"Saisir votre chaine:";
    cin>>p_str2;
    longueur2 = Longueur_chaine(p_str2);
    cout<<"longueur2 : "<<longueur2<<endl;

    char* concat = Concatene_nouvelle(p_str, p_str2);
    cout<<concat<<endl;

    delete [] p_str;
    delete [] p_str2;
    delete [] concat;

    return 0;
}