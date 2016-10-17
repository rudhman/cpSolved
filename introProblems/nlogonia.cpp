#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //freopen("nlogonia.in", "r", stdin);
    //freopen("nlogonia.out", "w", stdout);
    int k, posN, posM, x, y;

    cin>>k;
    while(k != 0){
        cin>>posN>>posM;

        while(k--){
            cin>>x>>y;
            if(x == posN || y == posM){
                cout<<"divisa";
            }
            else if(x < posN && y > posM){
                cout<<"NO";
            }
            else if(x > posN && y > posM){
                cout<<"NE";
            }
            else if(x > posN && y < posM){
                cout<<"SE";
            }
            else if(x < posN && y < posM){
                cout<<"SO";
            }
            printf("\n");
        }
        cin>>k;
    }


    return 0;
}