/*
ID: samrudh1
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int np=0, amount=0, numDiv=0;
char names[10][14];

void moneyOp(char name[14], int amount, int money[10]){
    for(int i=0; i<np; i++){
        if(strcmp(name,names[i]) == 0){
            money[i] += amount;
        }
    }


}

int main() {
    char keyName[14];
    int iniMon[10]={0}, finMon[10]={0};

    freopen("gift1.in", "r",stdin);
    freopen("gift1.out", "w",stdout);

    scanf("%d", &np);
    for(int i=0; i<np; i++){
        scanf("%14s", names[i]);
    }

    for(int i=0; i<np; i++){

        scanf("%s", keyName);
        scanf("%d %d", &amount, &numDiv);

        if(numDiv==0){
            continue;
        }
        else{
            if(amount==0){
                for (int j = 0; j < np; j++)
                {
                    scanf("%s", keyName);

                }
            }
            else{
                moneyOp(keyName, amount, iniMon);
                moneyOp(keyName, amount, finMon);
                moneyOp(keyName, ((amount%numDiv) - amount), iniMon);

                for (int j = 0; j < np; j++)
                {
                    scanf("%s", keyName);
                    moneyOp(keyName, amount/numDiv, finMon);
                }
            }
        }

    }

    for (int i = 0; i < np; i++)
    {
        printf("%s %d\n", names[i], (finMon[i]-iniMon[i]));
    }

    return 0;
}