#include <stdio.h>

int main(){
    float total_amount,transfer,deposite,withdraw,cheak_balance; 
    int pin,password,user_input; 

    printf("Enter your password: \n");
    scanf("%d", &password);

    printf("Enter Amount to Create Account: \n");
    scanf("%f", &total_amount);

     printf("\nEnter your choice :\nEnter 1 for check balance.\nEnter 2 for deposite.\nEnter 3 for withdraw.\nEnter 4 for transfer.\n");
    scanf("%d", &user_input);

    printf("Enter pin\n");
    scanf("%d", &pin);
     
    if (pin==password)
    {
    switch (user_input)
    {
    case 1:
       printf("Your total Balance in your Account is %f", total_amount);
        break;

    case 2:
        printf("Enter amount to Deposite\n");
        scanf("%f", &deposite);
        float net_balance_after;
        net_balance_after = total_amount + deposite;
        printf("Net Balance after Deposite is %f", net_balance_after);
        break;

    case 3:
        printf("Enter amount to Withdraw\n");
        scanf("%f", &withdraw);
        float balance_after_withdraw;
        balance_after_withdraw = total_amount - withdraw;
        printf("Net Balance after Withdraw %f", balance_after_withdraw);
        break;

    case 4:
        printf("Enter amount to Tranfer\n");
        scanf("%f", &transfer);
        float balance_after_transfer;
        balance_after_transfer = total_amount - transfer;
        printf("Net Balance after Transfer is %f", balance_after_transfer);
        break;
    
    default:
         printf("Enter valid user input");
        break;
    }

    }
    else
    {
        printf("Your password is Wrong. Repeat process Again!");
    }

   
}
