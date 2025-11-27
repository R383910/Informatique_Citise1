#include <iostream>
using namespace std;
#include "chaineUtils.h"

int LongueurChaine(char chaine[])
{
    int i = 0;
    while (chaine[i] != '\0') ++i;
    return i;
}

bool EstVoyelle(char c)
{
    char t = c;
    if (t >= 'A' && t <= 'Z') t = t - 'A' + 'a';
    return (t=='a'||t=='e'||t=='i'||t=='o'||t=='u'||t=='y');
}

int CompterVoyelles(char chaine[])
{
    int i = 0, cnt = 0;
    while (chaine[i] != '\0')
    {
        if (EstVoyelle(chaine[i])) ++cnt;
        ++i;
    }
    return cnt;
}

int CompterMots(char chaine[])
{
    int i = 0;
    int mots = 0;
    bool dansMot = false;
    while (chaine[i] != '\0')
    {
        if (chaine[i] != ' ' && !dansMot) { dansMot = true; ++mots; }
        else if (chaine[i] == ' ') dansMot = false;
        ++i;
    }
    return mots;
}
