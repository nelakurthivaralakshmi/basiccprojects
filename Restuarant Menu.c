#include <stdio.h>
int main() {
    int a,choice,piece,order,total,bill=0,k=0;
printf("welcome to All india food centre\n");
printf("Here is the menu\n your order please\n");
printf("1.veg:\n paneer masala-150\n  veg biryani-100\n mutter paneeer-120\npaneer biryani-180\nchapathi with kurma-120\n");
printf("2.non veg:\n chicken biryani-180\nfish fry-250\nmutton biryani-190\nchicken lolipops-250\nchapathi-chickencurry-300\n");
printf("3.ice creams:\n vanilla-50\nblackcurrent-200\nchocolate-100\nButter scoktch-85\nstrawberry-90\n");
printf("4.soft drinks:\nsprite-20\nthumsup-25\nmaaza-15\nsting-30\ncocoala-30\n");
printf("please enter choice\n");
scanf("%d",&a);
switch(a)
{
  
    case 1:
        printf("1.paneer masala-150\n2.veg biryani-100\n 3.mutter paneeer-120\n4.paneer biryani-180\n5.chapathi with kurma-120\n");
           scanf("%d",&choice);
           if(choice==1)
           {
           printf("paneer masala-150\n");
           printf("How many cups do you want??");
           scanf("%d",&piece);
           total=piece*150;
           printf("%d",piece*150);
           }
           else if(choice==2)
           {
            printf("vegbiryani-100\n");
            printf("How many plates do you want??");
           scanf("%d",&piece);
           total=piece*100;
           printf("%d",piece*100);
           }
           else if(choice==3)
           {
             printf("mutter paneer-120\n");
              printf("How many cups do you want??");
           scanf("%d",&piece);
           total=piece*120;
           printf("%d",piece*120);
           }
           else if(choice==4)
           {
             printf("paneer biryani-180\n");
             printf("How many plates do you want??");
           scanf("%d",&piece);
           total=piece*180;
           printf("%d",piece*180);
           }
           else
         {
              printf("chapathi-kurma-120\n");
              printf("How many plates do you want??");
           scanf("%d",&piece);
           total=piece*120;
           printf("%d",piece*120);
           }
           break;
   case 2:
    printf("1.chicken biryani-180\n2.fish fry-250\n3.mutton biryani-190\n4.chicken lolipops-250\n5.chapathi-chickencurry-300\n");
    scanf("%d",&choice);
    if(choice==1)
    {
     printf("chicken biryani-180\n");
     printf("How many plates do you want??");
           scanf("%d",&piece);
           total=piece*180;
           printf("%d",piece*180);
           }
           else if(choice==2)
           {
            printf("fish fry-250\n");
            printf("How many plates do you want??");
           scanf("%d",&piece);
           total=piece*250;
           printf("%d",piece*250);
           }
           else if(choice==3)
           {
               printf("mutton biryani-190\n");
               printf("How many plates do you want??");
               scanf("%d",&piece);
               total=piece*190;
               printf("%d",piece*190);
           }
           else if(choice==4)
           {
               printf("chicken lolipops-250\n");
               printf("How many pieces do you want??");
               scanf("%d",&piece);
               total=piece*250;
               printf("%d",piece*250);
           }
           else
{
    printf("chapathi-chicken curry-300\n");
    printf("How many plates do you want??");
    scanf("%d",&piece);
    total=piece*300;
    printf("%d",piece*300);
}
break;
case 3:
printf("1.vanilla-50\n2.blackcurrent-200\n3.chocolate-100\n4.Butter scoktch-85\n5.strawberry-90\n");
scanf("%d",&choice);
 if(choice==1)
    {
     printf("vanilla-50\n");
     printf("How many scoops do you want??");
           scanf("%d",&piece);
           total=piece*50;
           printf("%d",piece*50);
           }
           else if(choice==2)
           {
            printf("black current-200\n");
             printf("How many scoops do you want??");
           scanf("%d",&piece);
           total=piece*200;
           printf("%d",piece*200);
           }
           else if(choice==3)
           {
               printf("chocolate -85\n");
                printf("How many scoops do you want??");
               scanf("%d",&piece);
               total=piece*85;
               printf("%d",piece*85);
           }
           else if(choice==4)
           {
               printf("butter sckotch-85\n");
                printf("How many scoops do you want??");
               scanf("%d",&piece);
               total=piece*85;
               printf("%d",piece*85);
           }
           else
{
    printf("strawberry-90\n");
     printf("How many scoops do you want??");
    scanf("%d",&piece);
    total=piece*90;
    printf("%d",piece*90);
}
break;
case 4:
printf("1.sprite-20\n2.thumsup-25\n3.maaza-15\n4.sting-30\n5.cocoala-30\n");
scanf("%d",&choice);
 if(choice==1)
    {
     printf("sprite-20\n");
      printf("How many bottles do you want??");
           scanf("%d",&piece);
           total=piece*20;
           printf("%d",piece*20);
           }
           else if(choice==2)
           {
            printf("thumsup-25\n");
             printf("How many bottles do you want??");
           scanf("%d",&piece);
           total=piece*25;
           printf("%d",piece*25);
           }
           else if(choice==3)
           {
               printf("maaza-15\n");
                printf("How many bottles do you want??");
               scanf("%d",&piece);
               total=piece*15;
               printf("%d",piece*15);
           }
           else if(choice==4)
           {
               printf("sting-30\n");
                printf("How many bottles do you want??");
               scanf("%d",&piece);
               total=piece*30;
               printf("%d",piece*30);
           }
           else
{
    printf("cocoacola-30\n");
     printf("How many bottles do you want??");
    scanf("%d",&piece);
    total=piece*30;
    printf("%d",piece*30);
}
}
printf("\nMay I Know Any thing Else Do you want ?? press how many items do you want other wise press 0\n");
scanf("%d",&order);
if(order>0)
{
    printf("you ordered %d items again",order);
    for(int i=0;i<order;i++)
    {
printf(",\nplease enter choice\n");
scanf("%d",&a);
switch(a)
{
    case 1:
        printf("1.paneer masala-150\n 2. veg biryani-100\n 3.mutter paneeer-120\n4.paneer biryani-180\n5.chapathi with kurma-120\n");
           scanf("%d",&choice);
           if(choice==1)
           {
           printf("paneer masala-150\n");
            printf("How many cups do you want??");
           scanf("%d",&piece);
           bill=piece*150;
           printf("%d",piece*150);
           }
           else if(choice==2)
           {
             printf("vegbiryani-100\n");
              printf("How many plates do you want??");
           scanf("%d",&piece);
           bill=piece*100;
           printf("%d",piece*100);
           }
           else if(choice==3)
           {
             printf("mutter paneer-120\n");
              printf("How many cups do you want??");
           scanf("%d",&piece);
           bill=piece*120;
           printf("%d",piece*120);
           }
           else if(choice==4)
           {
             printf("paneer biryani-180\n");
              printf("How many plates do you want??");
           scanf("%d",&piece);
           bill=piece*180;
           printf("%d",piece*180);
           }
           else
         {
              printf("chapathi-kurma-120\n");
               printf("How many plates do you want??");
           scanf("%d",&piece);
           bill=piece*120;
           printf("%d",piece*120);
           }
           break;
   case 2:
    printf("1.chicken biryani-180\n2.fish fry-250\n3.mutton biryani-190\n4.chicken lolipops-250\n5.chapathi-chickencurry-300\n");
    scanf("%d",&choice);
    if(choice==1)
    {
     printf("chicken biryani-180\n");
     printf("How many plates do you want??");
           scanf("%d",&piece);
           bill=piece*180;
           printf("%d",piece*180);
           }
           else if(choice==2)
           {
            printf("fish fry-250\n");
            printf("How many plates do you want??");
           scanf("%d",&piece);
           bill=piece*250;
           printf("%d",piece*250);
           }
           else if(choice==3)
           {
               printf("mutton biryani-190\n");
               printf("How many plates do you want??");
               scanf("%d",&piece);
               bill=piece*190;
               printf("%d",piece*190);
           }
           else if(choice==4)
           {
               printf("chicken lolipops-250\n");
               printf("How many pieces do you want??");
               scanf("%d",&piece);
               bill=piece*250;
               printf("%d",piece*250);
           }
           else
{
    printf("chapathi-chicken curry-300\n");
    printf("How many plates do you want??");
    scanf("%d",&piece);
    bill=piece*300;
    printf("%d",piece*300);
}
break;
case 3:
printf("1.vanilla-50\n2.blackcurrent-200\n3.chocolate-100\n4.Butter scoktch-85\n5.strawberry-90\n");
scanf("%d",&choice);
 if(choice==1)
    {
     printf("vanilla-50\n");
     printf("How many scoops do you want??");
           scanf("%d",&piece);
           bill=piece*50;
           printf("%d",piece*50);
           }
           else if(choice==2)
           {
            printf("black current-200\n");
            printf("How many scoops do you want??");
           scanf("%d",&piece);
           bill=piece*200;
           printf("%d",piece*200);
           }
           else if(choice==3)
           {
               printf("chocolate -85\n");
               printf("How many scoops do you want??");
               scanf("%d",&piece);
               bill=piece*85;
               printf("%d",piece*85);
           }
           else if(choice==4)
           {
               printf("butter sckotch-85\n");
               printf("How many scoops do you want??");
               scanf("%d",&piece);
               bill=piece*85;
               printf("%d",piece*85);
           }
           else
{
    printf("strawberry-90\n");
    printf("How many scoops do you want??");
    scanf("%d",&piece);
    bill=piece*90;
    printf("%d",piece*90);
}
break;
case 4:
printf("1.sprite-20\n2.thumsup-25\n3.maaza-15\n4.sting-30\n5.cocoala-30\n");
scanf("%d",&choice);
 if(choice==1)
    {
     printf("sprite-20\n");
     printf("How many bottles do you want??");
           scanf("%d",&piece);
           bill=piece*20;
           printf("%d",piece*20);
           }
           else if(choice==2)
           {
            printf("thumsup-25\n");
            printf("How many bottles do you want??");
           scanf("%d",&piece);
           bill=piece*25;
           printf("%d",piece*25);
           }
           else if(choice==3)
           {
               printf("maaza-15\n");
               printf("How many bottles do you want??");
               scanf("%d",&piece);
               bill=piece*15;
               printf("%d",piece*15);
           }
           else if(choice==4)
           {
               printf("sting-30\n");
               printf("How many bottles do you want??");
               scanf("%d",&piece);
               bill=piece*30;
               printf("%d",piece*30);
           }
           else
  {
    printf("cocoacola-30\n");
    printf("How many bottles do you want??");
    scanf("%d",&piece);
    bill=piece*30;
    printf("%d",piece*30);
}
}
k=k+bill;
}
}
printf("your total bill is = %d",k+total);
return 0;
}
