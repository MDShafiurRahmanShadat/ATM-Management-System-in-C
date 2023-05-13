#include <stdio.h>

int check_password(int password) {
    int pin;
    printf("Enter pin: \n");
    scanf("%d", &pin);
    if (pin == password) {
        return 1; // Return true if password is correct
    } else {
        printf("Your password is wrong. Repeat process again!\n");
        return 0; // Return false if password is incorrect
    }
}

float deposit(float total_amount) {
    printf("Enter amount to deposit: \n");
    float deposit_amount;
    scanf("%f", &deposit_amount);
    float net_balance_after = total_amount + deposit_amount;
    printf("Net balance after deposit is %f\n", net_balance_after);
    return net_balance_after;
}

float withdraw(float total_amount) {
    printf("Enter amount to withdraw: \n");
    float withdraw_amount;
    scanf("%f", &withdraw_amount);
    float balance_after_withdraw = total_amount - withdraw_amount;
    printf("Net balance after withdraw is %f\n", balance_after_withdraw);
    return balance_after_withdraw;
}

float transfer(float total_amount) {
    printf("Enter amount to transfer: \n");
    float transfer_amount;
    scanf("%f", &transfer_amount);
    float balance_after_transfer = total_amount - transfer_amount;
    printf("Net balance after transfer is %f\n", balance_after_transfer);
    return balance_after_transfer;
}

int main() {
    float total_amount;
    int pin, password, user_input;

    printf("Enter your password: \n");
    scanf("%d", &password);

    printf("Enter amount to create account: \n");
    scanf("%f", &total_amount);

    if (check_password(password)) {
        printf("\nEnter your choice:\n1. Check balance.\n2. Deposit.\n3. Withdraw.\n4. Transfer.\n");
        scanf("%d", &user_input);

        switch (user_input) {
            case 1:
                printf("Your total balance in your account is %f\n", total_amount);
                break;

            case 2:
                total_amount = deposit(total_amount);
                break;

            case 3:
                total_amount = withdraw(total_amount);
                break;

            case 4:
                total_amount = transfer(total_amount);
                break;
                
            default:
                printf("Enter valid user input\n");
                break;
        }
    }
  return 0;
}
