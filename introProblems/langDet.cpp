#include <iostream>
//#include <fstream>

using namespace std;

int main(){

    //freopen("langDet.in", "r", stdin);
    //freopen("langDet.out", "w", stdout);

    char hellos[][13] = {"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
    char langs[][8] = {"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};
    int i;

    string s;
    int count = 1;
    while(cin>>s && s != "#"){
        bool found = false;

        for(i=0; i<6; i++){
            if(hellos[i] == s){
                printf("Case %d: %s\n", count++, langs[i]);
                found = true;
                break;
            }
        }
        if(!found)  //found in problem statement.. read it carefully!!!!
            printf("Case %d: UNKNOWN\n", count++);

    }



    return 0;
}