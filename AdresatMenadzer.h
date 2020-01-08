#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <algorithm>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenadzer {
vector <Adresat> adresaci;

Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

public:
    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
};

#endif
