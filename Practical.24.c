#include<stdio.h>           
                            

    void main()

        {
            char str1[]="Hello all";
            char str2[]="Hi";
            char str1rev[20];
            char copy[20];
            char Concat[20];
            char upp[20];
            char low[20];
            char Cptl[20];
            int i,j,length=0,flag=0;


            

            for(i=0;str1[i]!='\0';i++)
            {
                length++;
            }
            printf("1. The length of the given string is : %d\n\n",length);


            

            for(i=0;str1[i]!='\0';i++)
            {
                str1rev[i]=str1[(length-1)-i];
            }
            str1rev[i]='\0';

            printf("2. Reverse : %s\n\n",str1rev);


          

            for(i=0 ; str1[i]!='\0' || str2[i]!='\0' ; i++)
            {
                if(str1[i]!=str2[i])
                {
                    flag=1;
                    break;
                }
            }

            if(flag==1)
            {
                printf("3. Strings are not Equal.\n\n");
            }
            else if(flag==0)
            {
                printf("3. Strings are Equal.\n\n");
            }


        

            for(i=0;str1[i]!='\0';i++)
            {
                copy[i]=str1[i];
            }
            copy[i]='\0';

            printf("4. Copy : %s\n\n",copy);


            

            for(i=0;str1[i]!='\0';i++)
            {
                Concat[i]=str1[i];
            }
            Concat[i]=' ';
            i++;

            for(i=i,j=0 ; str2[j]!='\0' ; i++,j++)
            {
                Concat[i]=str2[j];
            }
            Concat[i]='\0';

            printf("5. Concatenation of Strings : %s\n\n",Concat);


            

            for(i=0;str1[i]!='\0';i++)
            {
                if(str1[i]>='a' && str1[i]<='z')
                {
                    upp[i]=str1[i]-32;  
                }
                else
                {
                    upp[i]=str1[i];
                }
            }
            upp[i]='\0';
            printf("6. Upper Case : %s\n\n",upp);


            

            for(i=0;str1[i]!='\0';i++)
            {
                if(str1[i]>='A' && str1[i]<='Z')
                {
                    low[i]=str1[i]+32;  // to lowercase
                }
                else
                {
                    low[i]=str1[i];
                }
            }
            low[i]='\0';
            printf("7. Lower Case : %s\n\n",low);


            

            for(i=0;str1[i]!='\0';i++)
            {
                if(i==0)  
                {
                    if(str1[i]>='a' && str1[i]<='z')
                    {
                        Cptl[i]=str1[i]-32;  
                    }
                    else
                    {
                        Cptl[i]=str1[i];
                    }
                }

                else if(str1[i-1]==' ')  
                {
                    if(str1[i]>='a' && str1[i]<='z')
                    {
                        Cptl[i]=str1[i]-32;  
                    }
                    else
                    {
                        Cptl[i]=str1[i];
                    }
                }

                else
                {
                    Cptl[i]=str1[i];
                }

            }

            Cptl[i]='\0';
            printf("8. Capitalize : %s\n\n",Cptl);

}
