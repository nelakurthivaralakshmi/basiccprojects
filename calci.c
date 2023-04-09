#include <stdio.h>
#include<math.h>
int main() {
   int choice,a,b;
   printf("choice 1=sum\nchoice 2=subtraction\nchoice 3multiplication\nchoice 4=division\n choice 5= power\nchoice 6=square root\n");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:
       printf("sum operation\n");
       scanf("%d%d",&a,&b);
       printf("%d",a+b);
       break;
       case 2:
       printf("Subtraction\n");
       scanf("%d%d",&a,&b);
       printf("%d",a-b);
       break;
       case 3:
       printf("multiplication\n");
       scanf("%d%d",&a,&b);
       printf("%d",a*b);
       break;
       case 4:
       printf("division\n");
       scanf("%d%d",&a,&b);
       printf("%f",a/b);
       break;
       case 5:
       printf("power\n");
       printf("a=const b=power");
       scanf("%d%d",&a,&b);
       printf("%d",pow(a,b));
       break;
       case 6:
       printf("square root");
       scanf("%d",&a);
       printf("%.3f",sqrt(a));
       break;
       
   }

    return 0;
}