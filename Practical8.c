#include<stdio.h>

    int main()

        {
            int ch,age,i;

            printf("Welcome to Spark Savings Bank.\n");

            for(i=1;1<2;i++)
                {
                printf("\nPress 1 for entering Age.\n");
                printf("Press 2 for Exiting.\n");

                lable2:

                scanf("%d",&ch);

                switch(ch)
                {
                case 1:

                    printf("\n%d.",i);
                    printf("Enter your Age : ");

                    lable1:

                    scanf("%d",&age);

                    if(age>=18 && age<=59)
                    {
                        printf("You are Eligible for Openning A Regular Savings Account.\n");
                    }

                    else if(age>=60 && age<=120)
                    {
                        printf("You are Eligible for Openning A Senior Citizen Account.\n");
                    }

                    else if(age>=1 && age<18)
                    {
                        printf("You are Not Eligible for Openning a Savings Account.\n");
                    }

                    else if(age<=0 || age>120)
                    {
                        printf("  Please enter a valid Age : ");
                        goto lable1;
                    }
                    break;

                case 2:

                    return 1;
                    break;

                default:

                    printf("\nPlease enter a valid Input : ");
                    goto lable2;
                    break;

                }
            }
            return 0;
        }
