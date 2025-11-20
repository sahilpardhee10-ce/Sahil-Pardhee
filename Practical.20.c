#include<stdio.h>          
                            

    int main()

        {
            int flag=0;
            int i,j,Missing;

            int ID[10] = {5,12,15,23,27};

            int ID1[10];

            for(i=0;i<6;i++)
            {
                scanf("%d",&ID1[i]);
            }

            for(i=0;i<6;i++)
            {
                for(j=0;j<6;j++)
                {
                    if(ID[i]==ID1[j])
                    {
                        flag = 0;
                        i++;
                    }

                    else if(ID[i]!=ID1[j])
                    {
                        flag = 1;
                        Missing = ID1[j];
                    }

                    if(flag == 1)
                    {
                        printf("%d is Missing.",Missing);
                        return 0;
                    }
                }
            }
        }
