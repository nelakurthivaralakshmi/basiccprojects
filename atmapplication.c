#include <stdio.h>
# define PIN 2346
# define CURRENT_AMOUNT 2000
void deposit();
void withdrawal();
void Balance_enquiry (int *a);
int money,key,Total;
int main() {
    int pin,choice;
    printf("welcome to yono SBI\n");
    printf("please enter ur atm card\n");
    printf("please enter ur PIN\n");
    scanf("%d",&pin);
    if(pin==PIN)
    {
        printf("please choose BANKING OPTION\n");
        printf("please choose TRANSACTION\n");
        printf("enter ur choice\n");
        printf("1.Deposit\n2.with drawal\n");
       scanf("%d",&choice);
       switch (choice)
       {
           case 1: deposit ();
                   break;
           case 2: withdrawal();
                   break;
       }
    }
       else
      printf ("invalid pin\n");
    return 0;
}
void deposit ()
{
    printf("pls  enteraccount\ncurrent\nsavings\n");
       printf("your transaction is being processed\n");
             printf("please enter money in available denominations of 1.100 2.200 3.500 4.2000\n ");
             printf("enter money\n");
             scanf("%d",&money);
             printf("press enter\n");
             printf("money in denomination \n");
             printf("enter key\n");
             scanf("%d",&key);
             switch(key)
             {
                 case 1: printf("money is in the form of 100's\n");
                 printf("%d*100= %d",money/100,money);
                 break;
                  case 2: printf("money is in the form of 200's\n");
                 printf("%d*100= %d",money/200,money);
                 break;
                  case 3: printf("money is in the form of 500's\n");
                 printf("%d*100= %d",money/500,money); 
                 break;
                   case 4: printf("money is in the form of 500's\n");
                 printf("%d*100= %d",money/2000,money);
                 break;
}
printf("enter\n");
printf("sucessful debited take ur receipt\n");
Total=CURRENT_AMOUNT+money;
Balance_enquiry(&Total);
return;
}
void withdrawal ()
{
    printf("please enteraccount\ncurrent\n savings account\n");
    printf("available denomination 100's and 500's only\n");
    printf("please enter amount\n");
    scanf("%d",&money);
    if(CURRENT_AMOUNT>money)
    {
    printf("enter key\n");
    switch (key)
    {
        case 1: printf("need 100's denomination\n");
              printf("%d*100=%d\n",money/100,money);
      case 2: printf("need 500's denomination\n");
              printf("%d*500=%d\n",money/500,money);
    }
    Total=CURRENT_AMOUNT-money;
    Balance_enquiry(&Total);
    }
    else
printf("insufficient balance\n");
    return;
}
void Balance_enquiry(int *a)
{
    printf("%d is current amount\n",*a);
    return;
}