#include <string>
#include "person.h";

// ODR - one definition rule:
// minden fv csak 1x lehet definialva
// deklaralni tobbszor is lehet, mert az csak megmondja a forditonak, h ilyen tipus letezik
// attol fuggoen h hol keletkezik duplikacio, a fordito vagy a linker tud szolni
// a.) 1 forras fajlban van 2x definialva (akar ugy, hogy headerbol szarmazik az egyik definicio): compiler (fordito) szol
// b.) 2 kulon forrasfajlban, akkor a linker tud szolni


//void Person::init (std::string n, int a) {
//    name = n;
//    age = a;
//}