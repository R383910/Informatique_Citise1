#include <iostream>
using namespace std;
#include "bigintConvInverse.h"

// Multiply a decimal string by base and add addend (base fits in 32-bit)
void MultAjouterChaine(char s[], unsigned long long multiplicateur, unsigned int addend)
{
    // multiplication long by multiplicateur and addition of addend
    unsigned long long carry = addend;
    int len = 0;
    while (s[len] != '\0') ++len;
    for (int i = len - 1; i >= 0; --i)
    {
        unsigned int digit = s[i] - '0';
        unsigned long long prod = digit * multiplicateur + carry;
        s[i] = static_cast<char>(static_cast<unsigned int>(prod % 10ULL) + '0');
        carry = prod / 10ULL;
    }
    // prepend carry digits if necessary
    while (carry > 0)
    {
        // shift right
        int newlen = 0;
        while (s[newlen] != '\0') ++newlen;
        for (int j = newlen; j >= 0; --j) s[j+1] = s[j];
        s[0] = static_cast<char>(static_cast<unsigned int>(carry % 10ULL) + '0');
        carry /= 10ULL;
    }
}

void ConversionBase2pow32VersChaine(unsigned int tab[], unsigned int taille, char chaine[])
{
    // initialiser chaine à "0"
    chaine[0] = '0';
    chaine[1] = '\0';
    const unsigned long long base = 4294967296ULL;
    // parcours des mots du poids fort au poids faible (tab[taille-1] ... tab[0])
    for (int i = (int)taille - 1; i >= 0; --i)
    {
        // chaine = chaine * base + tab[i]
        MultAjouterChaine(chaine, base, tab[i]);
    }
}
