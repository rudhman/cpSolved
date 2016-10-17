#include <iostream>

using namespace std;

int main(){
    int t, st, l, r, pos;
    scanf("%d", &t);

    while(t--){
        cin>>st;
        r=-100;
        l=100;
        while(st--){
            scanf("%d", &pos);
            if(pos > r)
                r=pos;
            if(pos<l)
                l = pos;
        }
        printf("%d\n", 2*(r-l));
    }

    return 0;
}