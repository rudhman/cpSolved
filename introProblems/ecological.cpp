#include <iostream>
//#include <fstream>

using namespace std;

int main(){

    //freopen("ecological.in", "r", stdin);
    //freopen("ecological.out", "w", stdout);

    int tc;
    scanf("%d", &tc);
    while(tc--){
        int no_of_farmers, i, size_of_farm, no_animals, env_score, tot_premium=0;
        scanf("%d", &no_of_farmers);
        for(i=0; i<no_of_farmers; i++){
            scanf("%d %d %d", &size_of_farm, &no_animals, &env_score);
            tot_premium += size_of_farm*env_score;
        }
        printf("%d\n",tot_premium);
    }

    return 0;
}