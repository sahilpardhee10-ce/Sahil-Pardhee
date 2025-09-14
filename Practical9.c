#include<stdio.h>

    void main()

        {
            float Tbill;

            for(int i=1;1<2;i++)
            {
                printf("\nCustomer No.%d\n",i);
                printf("Please enter Total Shopping Amount : ");

                lable:

                scanf("%f",&Tbill);

                if(Tbill<1000 && Tbill>0)
                {
                    printf("\nYour Total Bill is Rs.%.2f\n",Tbill);
                    printf("Sorry Sir there is No Discount available for your Shopping.\n");
                    printf("And if we apply 5%% GST,\nYou have to pay Rs.%.2f\n",Tbill*105/100);
                    printf("Thank You for shopping From Our Site.\n");
                }

                else if(Tbill>=1000 && Tbill<=5000)
                {
                    printf("\nYour Total Bill is Rs.%.2f\n",Tbill);
                    printf("Congratulations Sir, You have got 10%% Discount for your Shopping.\n");
                    printf("Now your Total Bill is Rs.%.2f\n",Tbill*90/100);
                    float Fdis=Tbill*90/100;
                    printf("And if we apply 5%% GST,\nYou have to pay Rs.%.2f\n",Fdis*105/100);
                    printf("Thank You for shopping From Our Site.\n");
                }

                else if(Tbill>5000)
                {
                    printf("\nYour Total Bill is Rs.%.2f\n",Tbill);
                    printf("Congratulations Sir, You have got 20%% Discount for your Shopping.\n");
                    printf("Now your Total Bill is Rs.%.2f\n",Tbill*80/100);
                    float Sdis=Tbill*80/100;
                    printf("And if we apply 5%% GST,\nYou have to pay Rs.%.2f\n",Sdis*105/100);
                    printf("Thank You for shopping From Our Site.\n");
                }

                else
                {
                    printf("\nPlease enter a valid Shoping Amount : ");
                    goto lable;
                }
            }
        }
