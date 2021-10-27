#include <cstring>
#include <iostream>

using namespace std;

void kibontas(const char* cimzett, int honap, int nap) {
    if (cimzett=="Lajos" && honap==12 && nap >= 24 && nap <= 26 )
        cout << "OPEN";
     else
        cout << "DON'T OPEN";
}

/*
#include <cstring>
#include <iostream>

using namespace std;

void kibontas(const char* cimzett, int honap, int nap) {
    if (strcmp(cimzett, "Lajos") == 0 && honap == 12 && nap >= 24 && nap <= 26) {
        cout << "OPEN";
    } else {
        cout << "DON'T OPEN";
    }
}
 */

