#include <iostream>
using namespace std;
#include "bigintConv.h"

// Diviser la chaîne décimale par base (2^32) et retourner reste.
// Implémentation : division "longue" sur la chaîne.
// Remarque : utilisation locale d'un accumulateur (unsigned long long) pour multiplier + reste.
unsigned int DiviserChaineParBase(char s[], unsigned long long base)
{
    unsigned long long reste = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        unsigned int digit = (unsigned int)(s[i] - '0');
        unsigned long long val = reste * 10ULL + digit;
        unsigned int qdigit = static_cast<unsigned int>(val / base);
        reste = val % base;
        // remplacer s[i] par quotient chiffre (peut être 0..9) — on génère une nouvelle chaîne de quotient
        s[i] = static_cast<char>(qdigit + '0');
        ++i;
    }
    // normalize leading zeros: shift left to remove leading zeros
    int start = 0;
    while (s[start] == '0' && s[start+1] != '\0') ++start;
    if (start > 0)
    {
        int j = 0;
        while (s[start] != '\0') { s[j++] = s[start++]; }
        s[j] = '\0';
    }
    return static_cast<unsigned int>(reste);
}

int ConversionChaineVersBase2pow32(char chaine[], unsigned int tailleMax, unsigned int tab[])
{
    // base = 2^32
    const unsigned long long base = 4294967296ULL;
    // copie de la chaine pour manipuler
    char buffer[1000];
    int i = 0;
    while (chaine[i] != '\0') { buffer[i] = chaine[i]; ++i; }
    buffer[i] = '\0';

    unsigned int count = 0;
    // tant que buffer != "0"
    if (buffer[0] == '\0') return 0;
    if (buffer[0] == '0' && buffer[1] == '\0') { tab[0] = 0; return 1; }

    while (!(buffer[0] == '0' && buffer[1] == '\0') && count < tailleMax)
    {
        unsigned int reste = DiviserChaineParBase(buffer, base);
        tab[count++] = reste;
        // si buffer devient "0", on arrête
    }
    return (int)count;
}
