//A simple BMI calculator for Gym gys.

#include<stdio.h>

    void main()

        {
            float w,h;

            do
            {
                printf("Please enter your Weight : ");
                scanf("%f",&w);

                if(w<=0)
                {
                    printf("Invalid Weight!!\n");
                }
            }while(w<=0);

            do
            {
                printf("Please enter your Height : ");
                scanf("%f",&h);

                if(h<=0)
                {
                    printf("Invalid Height!!\n");
                }
            }while(h<=0);

            float BMI,fh;

            fh=h*h/10000;

            BMI=w/fh;

            printf("Your BMI count is : %.1f\n",BMI);

            if(BMI<18.5)
            {
                printf("You'r considered as Underweight.");
            }

            else if(BMI>=18.5 && BMI<=24.9)
            {
                printf("You'r considered as Healthy Wighted Person.");
            }

            else if(BMI>=25 && BMI<=29.9)
            {
                printf("You'r considered as Overweight.");
            }

            else
            {
                printf("You'r considered an Obesity patient.");
            }
        }
