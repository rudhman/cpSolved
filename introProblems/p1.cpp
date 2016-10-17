#include <iostream>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main(){

	freopen("input.in", "r",stdin);
    freopen("output.out", "w",stdout);

	int a,b, c=1;
	while(scanf("%d %d", &a, &b) != EOF){
        if(c>1) printf("\n");
        printf("Case %d: %d\n", c++, a+b);
    }
}
