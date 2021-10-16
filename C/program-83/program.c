/*program to calculate profit & loss in BITCOIN mining*/

#include<stdio.h>

int main(){
 
   float current_btc_price, avg_cost;
   float total_btc, profitloss;
 
   printf("Enter Your Total Bitcoin: ");
   scanf("%f",&total_btc);
 
   printf("Enter Current Bitcoin Price: ");
   scanf("%f",&current_btc_price);

   printf("Your Average Bitcoin Purchase Price: ");
   scanf("%f",&avg_cost);

   //profitloss = (current_btc_price - averagecost) x total_btc 
 
   profitloss = (current_btc_price - avg_cost) * total_btc;
 
   if(profitloss > 0)
 printf("Bitcoin Trading Profit is: %0.2f",profitloss);
   else
 printf("Bitcoin Trading Loss is: %0.2f",profitloss);
 
   return 0;
}