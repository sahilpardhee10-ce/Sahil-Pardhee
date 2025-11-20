#include<stdio.h>          
                    

    struct library
    {
        int accession_no;
        char title[50];
        char author[50];
        float price;
        int issued;
    };

    int main()
        {
            int flag;

            struct library book;

            printf("Please enter the Accession Number : ");
            scanf("%d",&book.accession_no);

            printf("Please enter the Book name : ");
            scanf(" %[^\n]",book.title);

            printf("Please enter the Author's name : ");
            scanf(" %[^\n]",book.author);

            printf("Please enter the price : ");
            scanf("%f",&book.price);

            printf("Please give the book availability information.\n");

            lable:
            printf("(If available then press 1)\n");
            printf("(If not then press 0)\n");
            scanf("%d",&book.issued);

            if(book.issued == 1)
            {
                flag=1;
            }
            else if(book.issued == 0)
            {
                flag=0;
            }
            else
            {
                printf("Please Give correct information!!!\n");
                goto lable;
            }

            printf("\n\nBook Detalis\n");

            printf("\n\nAccession No. \t: %d\n",book.accession_no);
            printf("Book Name \t: %s\n",book.title);
            printf("Author Name \t: %s\n",book.author);
            printf("Price \t\t: %.2f\n",book.price);
            if(flag==1)printf("Availability \t: Available.\n");
            if(flag==0)printf("Availability \t: Issued.\n");

        return 0;

        }
