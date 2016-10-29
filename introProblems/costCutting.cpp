#include <iostream>
//#include <fstream>

using namespace std;

int main(){
    //freopen("costcutting.in", "r", stdin);
    //freopen("costcutting.out", "w", stdout);
    int t, a[3], swap, co=1;

    cin>>t;
    while(t--){
        cin>>a[0]>>a[1]>>a[2];
        do{
            swap = 0;

            for(int i=0; i<3-1; i++){
                if(a[i] > a[i+1]){
                    int temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;

                    swap++;
                }
            }
        }
        while(swap != 0);

        cout<<"Case "<<(co++)<<": "<<a[1]<<endl;
    }

    return 0
;}