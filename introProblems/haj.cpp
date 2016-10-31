#include <iostream>
#include <string.h>
#include <string>
//#include <fstream>

using namespace std;

int main(){
    //freopen("haj.in", "r", stdin);
    //freopen("haj.out", "w", stdout);

    char s[20];
    int caseno=1;

    while(cin>>s && s[0] != '*'){

        if(strcmp(s, "Hajj") == 0){
            printf("Case %d: Hajj-e-Akbar\n", caseno++);
        }
        else{
            printf("Case %d: Hajj-e-Asghar\n", caseno++);
        }

    }


    return 0;
}