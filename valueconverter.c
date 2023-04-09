#include <stdio.h>
void km_to_m(float a);
void centi_to_kelvin(float a);
void kelvin_to_centi(float a);
void centi_to_fahrenheit(float a);
void fahrenheit_to_centi(float a);
void dollar_to_rupees(float a);
void rupees_to_dollars(float a);
float a=0;
int main() {
 int choice;
 scanf("%f",&a);
 printf("enter choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
     case 1: printf("kilometers to meters");
       km_to_m(a);
       break;
     case 2: printf("centigrade to kelvin");
       centi_to_kelvin(a);
       break;
     case 3: printf("Kelvin to centigrade");
         kelvin_to_centi(a);
         break;
     case 4: printf("centi to fahrenheit");
         centi_to_fahrenheit(a);
         break;
     case 5: printf("Fahrenheit to centi");
         fahrenheit_to_centi(a);
         break;
    case 6:printf("dollars to rupees");
         dollar_to_rupees(a);
         break;
    case 7:
          printf("rupees to dollars");
          rupees_to_dollars(a);
          break;
         default:
         printf("no such case found");
 }
    return 0;
}
void km_to_m(float a)
{
    printf("%.3f",(a*1000));
    return;
}
void centi_to_kelvin(float a)
{
    printf("%.3f",(a+273));
    return;
}
void kelvin_to_centi(float a)
{
    printf("%.3f",(a-273));
    return;
}
void centi_to_fahrenheit(float a)
{
    printf("%.3f",((9*a)/5)+32);
    return;
}
void fahrenheit_to_centi(float a)
{
    printf("%.3f",((a-32)*5/9));
    return;
}
void dollar_to_rupees(float a)
{
    printf("%.3f",(a*80));
    return;
}
void rupees_to_dollars(float a)
{
    printf("%.3f",(a/80));
    return;
}