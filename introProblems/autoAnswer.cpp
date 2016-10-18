#include <iostream>
//#include <fstream>

using namespace std;

int main(){
    //freopen("tapmaster.in", "r", stdin);
    //freopen("tapmaster.out", "w", stdout);
    int t, n, tens;
    cin>>t;
    while(t--){
        cin>>n;
        tens = (((n*567/9 + 7492) * 235/47-498)/10)%10;
        if(tens<0) tens = -tens;
        cout<<tens<<endl;
    }

    return 0;
}