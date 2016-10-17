/*
ID: samrudh1
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");

    char comet[8], group[8];
    int mulC=1, mulG=1;

    fin >> comet >> group;
    for(int i=0; comet[i] != '\0'; i++){
        mulC *= (comet[i] - 64);
    }
    for(int i=0; group[i] != '\0'; i++){
        mulG *= (group[i] - 64);
    }

    if(mulC%47 == mulG%47){
        fout<<"GO"<<endl;
    }
    else{
        fout<<"STAY"<<endl;
    }
    return 0;
}