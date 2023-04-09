#include <stdio.h>
int main() {
    int num,cnum;
    printf("enter ur num: \n");
    scanf("%d",&num);
    for(int i=0;i<=10;i++)
    {
        scanf("%d",&cnum);
        if(num==cnum)
        {
            printf("game done\n");
            break;
        }
         else if(num<cnum)
         {
             printf("number is too low\n");
             
         }
              else if(num>cnum)
              {
                 printf("number is too high\n");
                 
              }
                 else 
                 printf("num not found\n");
        }

    return 0;
}