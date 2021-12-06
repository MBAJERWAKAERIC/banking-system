#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 3F");
    int pin = 1234,option,enteredPin,count=0,amount=1;
    float balance = 5000;
    int continueTransaction = 1;

    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t          %s", ctime(&now));
    printf("\n\t\t\t===================*Welcome the Mbaje banking system ATM*============");

    while("pin != enteredPin"){
        printf("\n Please enter your pin : ");
        scanf("%d" ,&enteredPin);
        if(enteredPin != pin){z
            Beep(610,500);
            printf("invalid pin!!!");

        }
        count++;
        if(count == 3 && pin != enteredPin){
            exit(0);
        }
    }
    while(continueTransaction !=0){
            printf("\n\t\t\t===============*Available transactions*=================");
            printf("\n\n\t\t1.Withdraw1");
            printf("\n\n\t\t2.Deposit");
            printf("\n\n\t\t3.Check balance");
            printf("\n\n\t please select the option : ");
            scanf("%d", &option);
            switch(option){
            case 1:
                while(amount % 500 != 0){
                    printf("\n\t\t Enter the amount :");
                    scanf("%d", &amount);
                    if(amount %500 !=0);
                    printf("\n\t the amount should be multiple of 500");
                }
                if(balance < amount){
                    printf("\n\t Sorry the insufficient balance");
                    amount =1;
                    break;
                }
                else{
                    balance -=amount;
                    printf("\n\t\t You have withdrawn Rs.%d. your new balance is %.2f",amount,balance);
                    amount=1;
                    break;
                }
                }
                }
            }




