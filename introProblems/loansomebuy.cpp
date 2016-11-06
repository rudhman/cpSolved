#include <iostream>
//#include <fstream>

using namespace std;

int main(){
    //freopen("loansome.in", "r", stdin);
    //freopen("loansome.out", "w", stdout);

    int loan_months, records;
    float dep_arr[101]; // 100 max months of payment;
    float down_payment, loan_amount; //hmm camelCase vs underscored_case

    while(scanf("%d %f %f %d", &loan_months, &down_payment, &loan_amount, &records) && loan_months>=0){

        int month; float dep_percent;
        while(records--){
            int i;
            scanf("%d %f", &month, &dep_percent);
            for(i=month; i<101; i++){
                dep_arr[i] = dep_percent;
            }
        }

        int current_month = 0;
        float monthly_payment = loan_amount/loan_months;
        float present_value = (loan_amount+down_payment)*(1 - dep_arr[current_month]);
        float current_loan = loan_amount;

        while(current_loan > present_value){
            current_loan -= monthly_payment;
            current_month++;
            present_value = present_value * (1 - dep_arr[current_month]);
        }

        if(current_month != 1){
            printf("%d months\n", current_month);
        }
        else
            printf("%d month\n", current_month);

        }

    return 0;
}