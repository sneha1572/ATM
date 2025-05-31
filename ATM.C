/*Check balance

Deposit money

Withdraw money

Exit

The menu keeps repeating until the user chooses to exit. */
/* 📘 Add-ons Included:
✅ Simple PIN check

✅ Limit to 3 withdrawals per session

✅ Maximum daily withdrawal limit (₹20,000)

*/

#include <stdio.h>
float balance = 60000;
int main()
{
    int choice;
    float deposit, withdraw;
    int pin = 1234;
    int withdrawlimit;
    int withdrawcount;

    printf("\nEnter your 4 digit ATM-PIN: ");
    scanf("%d", &pin);
    if(pin != 1234)
    {
        printf("\nPlease enter the current pin");
        return 1;
    }

    do
    {

        printf("\n=======ATM MENU========");
        printf("\n 1) Check Balance");
        printf("\n 2) Deposit Money");
        printf("\n 3) Withdraw Money");
        printf("\n 4) EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("\nYour current balance is %.2f", balance);
            break;
        case 2:
            printf("\nEnter amount to deposit: ");
            scanf("%f", &deposit);
            balance += deposit;

            if(deposit>0)
            {
                printf("\nYour money has been successfully deposited in your account.\nYour current balance is %.2f", balance);

            }
            else
            {
                printf("\nAmount is invalid");
            }
            break;
        case 3:

            if(withdrawcount>=3)
            {
                printf("\nYou have reached to the daily withdraw limit");
                return 1;
            }

          if (withdrawlimit<=50000)
          {


                printf("\nEnter amount to withdraw: ");
            scanf("%f", &withdraw);
            balance -= withdraw;
            withdrawcount++;
          }

          else
          {
                                   printf("\nYou have reached to the daily withdraw limit");

          }

            if(withdraw > 0 && withdraw <= balance)
            {
                printf("\nWithdraw has been done successfully. \t Your current balance is %.2f", balance);

            }
            else
            {
                printf("\nInvalid! Insufficient balance.");
            }

        case 4:
            printf("\nThank you for using our ATM!");
        }
    }
    while(choice!=4);

}
