#include <iostream>
#include <string.h>
//#include <fstream>

using namespace std;

int main(){
    //freopen("savesetu.in", "r", stdin);
    //freopen("savesetu.out", "w", stdout);

    int t, totMon=0, x;
    char s[10];
    cin>>t;
    while(t--){
            cin>>s;

            if(strcmp(s, "donate")==0){
                cin>>x;
                totMon+=x;
            }
            else{
                printf("%d\n",totMon);
            }
    }

    return 0;
}