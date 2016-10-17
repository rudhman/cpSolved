#include <iostream>

using namespace std;

int check(int starter, int ender){
    if(starter < ender)
        return (40+starter-ender);
    return (starter-ender);
}

int main(){

    int start, a, b, c, tturns;

    while(scanf("%d %d %d %d", &start, &a, &b, &c), (start||a||b||c)){
        tturns = 720 + check(start, a)*9 +360 + check(b, a)*9 + check(b, c)*9 ;
        printf("%d\n", tturns);
    }

    return 0;
}