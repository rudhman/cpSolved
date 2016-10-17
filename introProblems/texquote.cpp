#include <iostream>

using namespace std;

int main(){

    //freopen("textQ.in", "r", stdin);
    //freopen("textQ.out", "w", stdout);

    char text;
    bool open=1;

    while(scanf("%c", &text) != EOF){
        if(text == '"'){
            if(open){
                printf("``");
            }
            else{
                printf("''");
            }
            open = (!open);
        }
        else{
            printf("%c", text);
        }
    }
    return 0;
}