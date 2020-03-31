#include "PhoneticFinder.hpp"
#include "doctest.h"
#include <string>
using namespace phonetic;


TEST_CASE("Test replacement of p,f and b") {
    string text = "xxx federal yyy";
    CHECK(find(text, "federal") == string("federal"));
    CHECK(find(text, "pederal") == string("federal"));
    CHECK(find(text, "bederal") == string("federal"));
    
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "federal xxx yyy";
    CHECK(find(text, "FederaL") == string("federal"));
    CHECK(find(text, "FeDeral") == string("federal"));
    CHECK(find(text, "fedEraL") == string("federal"));
    CHECK(find(text, "fedeRAL") == string("federal"));
    CHECK(find(text, "FEdEraL") == string("federal"));
    CHECK(find(text, "FeDerAl") == string("federal"));
    CHECK(find(text, "fedERaL") == string("federal"));
    CHECK(find(text, "fEDeRAL") == string("federal"));

}
TEST_CASE("Test replacement of v and w") {
    string text = "xxx vow yyy";
    CHECK(find(text, "vow") == string("vow"));
    CHECK(find(text, "wow") == string("vow"));
    CHECK(find(text, "wov") == string("vow"));
    CHECK(find(text, "vov") == string("vow"));
    
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "xxx vow yyy";
    CHECK(find(text, "VOW") == string("vow"));
    CHECK(find(text, "voW") == string("vow"));
    CHECK(find(text, "VOw") == string("vow"));
    CHECK(find(text, "vOW") == string("vow"));
    CHECK(find(text, "VoW") == string("vow"));
    CHECK(find(text, "vOw") == string("vow"));
    ;
}
TEST_CASE("Test replacement of g and j") {
    string text = "xxx gaj yyy";
    CHECK(find(text, "gaj") == string("gaj"));
    CHECK(find(text, "jag") == string("gaj"));
    CHECK(find(text, "gag") == string("gaj"));
    CHECK(find(text, "jaj") == string("gaj"));
    
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "xxx gaj yyy";
    CHECK(find(text, "Gaj") == string("gaj"));
    CHECK(find(text, "GAJ") == string("gaj"));
    CHECK(find(text, "GaJ") == string("gaj"));
    CHECK(find(text, "gaJ") == string("gaj"));
}
TEST_CASE("Test replacement of c,k and q") {
    string text = "xxx quack yyy";
    CHECK(find(text, "quack") == string("quack"));
    CHECK(find(text, "quakk") == string("quack"));
    CHECK(find(text, "quacq") == string("quack"));
    CHECK(find(text, "cuacc") == string("quack"));
    CHECK(find(text, "cuacc") == string("quack"));
    CHECK(find(text, "kuakk") == string("quack"));
    CHECK(find(text, "quaqq") == string("quack"));
    CHECK(find(text, "quacc") == string("quack"));
    CHECK(find(text, "kuack") == string("quack"));
    CHECK(find(text, "cuack") == string("quack"));
    CHECK(find(text, "kuacc") == string("quack"));
    CHECK(find(text, "kuaqk") == string("quack"));
    CHECK(find(text, "kuakc") == string("quack"));
    CHECK(find(text, "cuaqq") == string("quack"));
    CHECK(find(text, "quakc") == string("quack"));
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Quack xxx yyy";
    CHECK(find(text, "quack") == string("Quack"));
    CHECK(find(text, "qUacK") == string("Quack"));
    CHECK(find(text, "QuaCk") == string("Quack"));
    CHECK(find(text, "quacK") == string("Quack"));
    CHECK(find(text, "QUACK") == string("Quack"));
    CHECK(find(text, "quAck") == string("Quack"));
    CHECK(find(text, "quacK") == string("Quack"));
}
TEST_CASE("Test replacement of s and z") {
    string text = "xxx zeus yyy";
    CHECK(find(text, "zeus") == string("zeus"));
    CHECK(find(text, "zeuz") == string("zeus"));
    CHECK(find(text, "seus") == string("zeus"));
    CHECK(find(text, "seuz") == string("zeus"));
    
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Zeus xxx yyy";
    CHECK(find(text, "zeus") == string("Zeus"));
    CHECK(find(text, "ZEus") == string("Zeus"));
    CHECK(find(text, "zeuS") == string("Zeus"));
    CHECK(find(text, "ZeUs") == string("Zeus"));
    CHECK(find(text, "ZEUS") == string("Zeus"));
    CHECK(find(text, "ZEuS") == string("Zeus"));
    CHECK(find(text, "ZEUs") == string("Zeus"));
    CHECK(find(text, "zEUS") == string("Zeus"));
    CHECK(find(text, "ZeuS") == string("Zeus"));
    CHECK(find(text, "zeUs") == string("Zeus"));
    
}
TEST_CASE("Test replacement of d and t") {
    string text = "xxx diet yyy";
    CHECK(find(text, "tiet") == string("diet"));
    CHECK(find(text, "died") == string("diet"));
    CHECK(find(text, "tied") == string("diet"));
    
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "xxx Diet yyy";
    CHECK(find(text, "DiEt") == string("Diet"));
    CHECK(find(text, "DieT") == string("Diet"));
    CHECK(find(text, "dieT") == string("Diet"));
    CHECK(find(text, "diEt") == string("Diet"));
    CHECK(find(text, "DIET") == string("Diet"));
    CHECK(find(text, "DiET") == string("Diet"));
    CHECK(find(text, "DIEt") == string("Diet"));
    CHECK(find(text, "dIET") == string("Diet"));
    
}
TEST_CASE("Test replacement of o and u") {
    string text = "xxx opium yyy";
    CHECK(find(text, "opium") == string("opium"));
    CHECK(find(text, "upium") == string("opium"));
    CHECK(find(text, "opiom") == string("opium"));
    CHECK(find(text, "upiom") == string("opium"));
     
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "opium xxx yyy";
    CHECK(find(text, "Opium") == string("opium"));
    CHECK(find(text, "opiUm") == string("opium"));
    CHECK(find(text, "opiuM") == string("opium"));
    CHECK(find(text, "OPIUM") == string("opium"));
    CHECK(find(text, "OPIuM") == string("opium"));
    CHECK(find(text, "OPIUm") == string("opium"));
    CHECK(find(text, "OpIUM") == string("opium"));
    CHECK(find(text, "OpiUM") == string("opium"));
    
}
TEST_CASE("Test replacement of i and y") {
    string text = "xxx mainly yyy";
    CHECK(find(text, "mainly") == string("mainly"));
    CHECK(find(text, "maynly") == string("mainly"));
    CHECK(find(text, "mainli") == string("mainly"));
    CHECK(find(text, "maynli") == string("mainly"));
     
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Mainly xxx yyy";
    CHECK(find(text, "mainly") == string("Mainly"));
    CHECK(find(text, "MainLy") == string("Mainly"));
    CHECK(find(text, "MainlY") == string("Mainly"));
    CHECK(find(text, "MAINLY") == string("Mainly"));
    CHECK(find(text, "maiNly") == string("Mainly"));
    CHECK(find(text, "MAinLy") == string("Mainly"));
    CHECK(find(text, "maiNlY") == string("Mainly"));
    CHECK(find(text, "MaINLY") == string("Mainly"));
    CHECK(find(text, "MaINLy") == string("Mainly"));
    CHECK(find(text, "MaInLY") == string("Mainly"));
    CHECK(find(text, "MaiNLY") == string("Mainly"));
    CHECK(find(text, "MaInLy") == string("Mainly"));
    
}






