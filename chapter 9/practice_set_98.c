/*Create a structure representing a bank account of a customer. What fields did you use
and why?*/
#include <stdio.h>
typedef struct account
{
    int acc_number;
    float balance;
    char name[20];

}account;
int main(){
    account n1 = {23452, 7688980.98, "saksham"};
    printf("account number is %d, account balance is %.2f, name of holder is %s", n1.acc_number, n1.balance, n1.name);
    return 0;
}