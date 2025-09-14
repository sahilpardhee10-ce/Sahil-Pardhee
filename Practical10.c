#include<stdio.h>

    int main()

        {
            printf("Welcome to the Foodies Restaurant.\n");

            int TBill=0;
            int ch;

            do{
                printf("\n");
                printf("Here is the Menu Sir/Mam.\n");
                printf("\n");
                printf("Press 1 For Ordering BURGER\t\t\tRs.150\n");
                printf("Press 2 For Ordering PIZZA\t\t\tRs.200\n");
                printf("Press 3 For Ordering PASTA\t\t\tRs.120\n");
                printf("Press 4 For Ordering SANDWICH\t\t\tRs.100\n");
                printf("Press 5 For Ordering FRENCH FRIES\t\tRs.80\n");
                printf("Press 6 For Compeleting/Exiting Order.\n");

                lable:

                scanf("%d",&ch);

                switch(ch)
                {
                case 1:
                    printf("\n");
                    printf("Your Total Order Amount is : Rs.%d",TBill+150);
                    TBill=TBill+150;
                    printf("\n");
                    printf("\n");
                    break;
                case 2:
                    printf("\n");
                    printf("Your Total Order Amount is : Rs.%d",TBill+200);
                    TBill=TBill+200;
                    printf("\n");
                    printf("\n");
                    break;
                case 3:
                    printf("\n");
                    printf("Your Total Order Amount is : Rs.%d",TBill+120);
                    TBill=TBill+120;
                    printf("\n");
                    printf("\n");
                    break;
                case 4:
                    printf("\n");
                    printf("Your Total Order Amount is : Rs.%d",TBill+100);
                    TBill=TBill+100;
                    printf("\n");
                    printf("\n");
                    break;
                case 5:
                    printf("\n");
                    printf("Your Total Order Amount is : Rs.%d",TBill+80);
                    TBill=TBill+80;
                    printf("\n");
                    printf("\n");
                    break;
                case 6:
                    return 1;
                default:
                    printf("\n");
                    printf("Please Enter A Valid Choice : ");
                    goto lable;
                }
            }while(1);

            return 0;
        }

