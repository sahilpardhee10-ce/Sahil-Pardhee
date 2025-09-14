#include<stdio.h>

    void main()

        {
            float l,w,a,p;


            do
            {
                printf("Please enter the Length of the Park : ");
                scanf("%f",&l);

                if(l<=0)
                {
                    printf("Invalid input!!!\n");
                }
            }while(l<=0);

            do
            {
                printf("Please enter the Width of the Park : ");
                scanf("%f",&w);

                if(w<=0)
                {
                    printf("Invalid input!!!\n");
                }
            }while(w<=0);

            p=2*l+2*w;
            printf("The Perimeter of the given Park is : %.2f\n",p);

            a=l*w;
            printf("The Area of the given Park is : %.2f\n",a);

            float fc,gc;

            //If the Fencing cost is Rs.12 per Meter.

            fc=p*12;
            printf("The cost for Fencing the Park is : %.2f\n",fc);

            //If the Grass Laying cost is Rs.5 per square meter.

            gc=a*5;
            printf("The cost for Laying Grass from the Park is : %.2f\n",gc);
        }
