#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();
    ksiazkaAdresowa.wylogowanieUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();
    ksiazkaAdresowa.wylogowanieUzytkownika();

    return 0;
}
