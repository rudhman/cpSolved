#include <iostream>
//#include <fstream>

using namespace std;

int main(){
    //freopen("packholi.in", "r", stdin);
    //freopen("packholi.out", "w", stdout);

    int tc, length, width, height, caseno=1;
    bool check;
    cin>>tc;
    while(tc--){
        check=true;
        cin>>length>>width>>height;
        if(length>20 || width>20 || height>20)
            check=false;

        if(check)
            printf("Case %d: good\n", caseno++);
        else
            printf("Case %d: bad\n", caseno++);

    }
    return 0;
}