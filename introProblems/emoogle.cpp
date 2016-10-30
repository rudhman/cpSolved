#include <iostream>
//#include <fstream>

using namespace std;

int main(){
    //freopen("emoogle.in", "r", stdin);
    //freopen("emoogle.out", "w", stdout);

    int events, n, x, count=1;

    while(cin>>n && n != 0){

        int emoogBal = 0;
        while(n--){
            cin>>x;
            if(x == 0){
                emoogBal--;
            }
            else
                emoogBal++;
        }
        printf("Case %d: %d\n",count++, emoogBal);
    }





    return 0;
}