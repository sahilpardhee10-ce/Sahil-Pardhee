#include<stdio.h>

    int main()

        {
            float rm=5000;
            float wm,dm;
            int ch;

            printf("Welcome to National Bank of Bharat.");

            do
            {
                printf("\n\nYour Total Balance is Rs %.2f\n",rm);
                printf("\nPress 1 to Withdraw Money.\n");
                printf("Press 2 to Deposit Money.\n");
                printf("Press 3 to Exit.\n");

                lable2:

                scanf("%d",&ch);

                switch(ch)
                {
                case 1:

                    if(rm==0)
                    {
                        printf("\n\nYou do not have sufficient Balance to Withdraw!!!\n");
                        printf("Enter valid Choice : ");
                        goto lable2;
                    }

                    printf("\nEnter the amount you wish to Withdraw : ");

                    lable1:

                    scanf("%f",&wm);


                    if(wm<=0)
                    {
                        printf("Enter valid amount : ");
                        goto lable1;
                    }
                    else if(wm<=rm)
                    {
                        rm=rm-wm;
                        printf("Rs %.2f successsfully Deducted from your account.",wm);
                    }
                    else if(wm>rm)
                    {
                        printf("\n\n\t\tWARNING\n\tInsufficient Balance!!\n\n");
                        printf("Enter sufficient amount : ");
                        goto lable1;
                    }
                    break;

                case 2:

                    printf("\nEnter the amount you want to Deposit : ");

                    lable3:

                    scanf("%f",&dm);

                    if(dm<=0)
                    {
                        printf("Enter valid amount : ");
                        goto lable3;
                    }
                    else if(dm>0)
                    {
                        rm=rm+dm;
                        printf("Rs %.2f successsfully Credited to your account.",dm);
                    }
                    break;

                case 3:
                    printf("\n\nHave a Nice Day....\n\n");
                    return 0;

                default:
                    printf("Enter valid Choice : ");
                    goto lable2;

                }

            }while(1);
        }
