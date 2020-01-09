#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <algorithm>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenadzer {
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
        idOstatniegoAdresata = 0;
    };
    int dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
};

#endif
