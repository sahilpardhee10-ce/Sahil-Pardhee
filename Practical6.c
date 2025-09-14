#include<stdio.h>

    int main()

        {
            float c,f,k;
            int ch;

            do
            {
                printf("\n");
                printf("\n");

                printf("Press 1 For entering temperature in Celsius.\n");
                printf("Press 2 For entering temperature in Fahrenheit.\n");
                printf("Press 3 For entering temperature in Kelvin.\n");
                printf("Press 4 For Exiting.\n");

                lable1:
                
                scanf("%d",&ch);

                switch(ch)
                {
                    case 1:
                        printf("Please enter the temperature : ");
                        scanf("%f",&c);

                        f=(c*9/5)+32;
                        k=c+273.15;

                        printf("The given temperature in Fahrenheit is about : %.2f\n",f);
                        printf("The given temperature in Kelvin is about : %.2f\n",k);
                        break;

                    case 2:
                        printf("Please enter the temperature : ");
                        scanf("%f",&f);

                        c=(f-32)*5/9;
                        k=c+273.15;

                        printf("The given temperature in Celsius is about : %.2f\n",c);
                        printf("The given temperature in Kelvin is about : %.2f\n",k);
                        break;

                    case 3:
                        printf("Please enter the temperature : ");
                        scanf("%f",&k);

                        c=k-273.15;
                        f=(c*9/5)+32;

                        printf("The given temperature in Celsius is about : %.2f\n",c);
                        printf("The given temperature in Fahrenheit is about : %.2f\n",f);
                        break;

                    case 4:
                        return 1;

                    default:
                        printf("Please enter a valid Choice : ");
                        goto lable1;
                }

            }while(1);

            return 0;
        }
