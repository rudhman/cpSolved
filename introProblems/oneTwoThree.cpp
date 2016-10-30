#include <iostream>
//#include <fstream>
#include <string>

using namespace std;

int main(){
    //freopen("onetowthree.in", "r", stdin);
    //freopen("onetwothree.out", "w", stdout);

    int tc, count;
    string st;

    cin>>tc;
    while(tc--){
        cin>>st;
        count = 0;

        if(st.length() == 3){
            if(st[0] == 'o' ) count++; //compare 0, 1, 2 places..only one of the places have it wrong
            if(st[1]== 'n') count++;
            if(st[2] == 'e') count++;
            /* o n e
               o t e  2
               w n e  2
               t o o  0
            */

            if(count>=2) //only 1 mistake per word so atleast 2 will match
                printf("1\n");
            else
                printf("2\n");
        }
        else{
            printf("3\n");
        }
    }

    return 0;
}