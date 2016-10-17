#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main(){

    //freopen("celeb.in", "r", stdin);
    //freopen("celeb.out", "w", stdout);

    char str[10];

    while(gets(str)){
        printf("%s\n", str);
    }
    return 0;
}