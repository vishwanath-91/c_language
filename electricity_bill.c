/***an electric power distribution company charges its domestic consumers as follows***/
               /*consumption units */                   /*rate of charge*/
                       /*0-200                         Rs 0.50 per unit

                         201-400                       Rs 100+tex,
                                                        Rs 0.65 per unit ,
                                                        Excess of 200

                         401-600                       Rs 230+tex, 
                                                      Rs 0.80 per unit, 
                                                      Excess of 400

                         601 and above                 Rs 390+tex, 
                                                      Rs1.00 per unit, 
                                                      Excess of 600

                         the program in reads the customer number and power consumed and print the amount to be paid by the customer.
                         */

#include <stdio.h>
#include <conio.h>

int main()
{
   char customer_name[15];
   int customer_id;
   float unit, charge;

   printf("Enter the customer_name=");
   scanf("%s", &customer_name);

   printf("Enter customer_id=");
   scanf("%d", &customer_id);

   printf("Enter unit=");
   scanf("%f", &unit);

   if (unit <= 200)
   {
      charge = (unit * 5.0);
   }
   else if (unit <= 400)
   {
      charge = ((unit *6.5)+100)-200;
   }
   else if (unit<=600)
   {
      charge =((unit *8.0)+230)-400;
   }
   else
   {
      charge =((unit *10.0)+230)-600;

   }

   printf("%f Rs",charge);
   return 0;
}