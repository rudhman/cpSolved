#include <iostream>
//#include <fstream>

using namespace std;

int main(){
    //freopen("nessy.in", "r", stdin);
    //freopen("nessy.out", "w", stdout);

    int t, n, m;
    cin>>t;
    while(t--){
        scanf("%d %d", &n, &m);
        printf("%d\n", (n/3)*(m/3));
    }

    return 0;
}