#include<stdio.h>
#include<unistd.h>

    int main()

    {
        int t,r,a;

        printf("Enter how much water is already in tank : ");
        scanf("%d",&a);

        printf("Enter tank refill Rate(Liters per Minute) : ");
        scanf("%d",&r);

        for(t=a;1<2;t=t+r)
        {
            if(t==100 || t>100)
            {
                printf("Tank is 100%% Full.\n\n");
                return 0;
            }

            //printf("Current water level : %2d Liters\n",t);
            printf("Tank is %3d%% Full.\n",t);
            sleep(1);
        }

    return 0;
    }
