#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
//#include <fstream>

using namespace std;

int main(){
    //freopen("secre.in", "r", stdin);
    //freopen("secre.out", "w", stdout);

    int tc;
    string seq;
    scanf("%d", &tc);

    while(tc--){
        cin>>seq;
        int slen = strlen(seq.c_str());

        if (seq == "1" || seq == "4" || seq == "78")
            printf("+\n");
        else if (seq[slen-2] == '3' && seq[slen-1] == '5')
            printf("-\n");
        else if (seq[0] == '9' && seq[slen-1] == '4')
            printf("*\n");
        else
            printf("?\n");

    }

    return 0;
}