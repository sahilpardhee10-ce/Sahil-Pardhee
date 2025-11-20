#include<stdio.h>           
#include <string.h>         


    char title[50];
    char author[50];
    int totalCopies = 0;
    int availableCopies = 0;

    void displayBook();
    int checkAvailability();
    void updateInventory(int change);
    float calculateFine(int daysLate);

int main()
{
    int choice, days;

    
    printf("Enter Book Title: ");
    fgets(title, 50, stdin);
    title[strcspn(title, "\n")] = '\0';

    printf("Enter Author Name: ");
    fgets(author, 50, stdin);
    author[strcspn(author, "\n")] = '\0';

    printf("Enter Total Number of Copies: ");
    scanf("%d", &totalCopies);

    availableCopies = totalCopies;

    while(1)
    {
        printf("\n===== LIBRARY MENU =====\n");
        printf("1. Check Book Availability\n");
        printf("2. Borrow Book\n");
        printf("3. Return Book\n");
        printf("4. Calculate Fine\n");
        printf("5. Display Book Details\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(checkAvailability())
                {
                    printf("Book is AVAILABLE.\n");
                }
                else
                {
                    printf("Book is NOT AVAILABLE.\n");
                }
                break;

            case 2:
                if(checkAvailability())
                {
                    updateInventory(-1);
                    printf("Book Borrowed Successfully!\n");
                }
                else
                {
                    printf("No copies available to borrow.\n");
                }
                break;

            case 3:
                if(availableCopies < totalCopies)
                {
                    updateInventory(1);
                    printf("Book Returned Successfully!\n");
                }
                else
                {
                    printf("All copies are already in the library.\n");
                }
                break;

            case 4:
                printf("Enter number of days late: ");
                scanf("%d", &days);
                printf("Fine Amount = ₹%.2f\n", calculateFine(days));
                break;

            case 5:
                displayBook();
                break;

            case 6:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

    
    void displayBook()
    {
        printf("\n===== BOOK DETAILS =====\n");
        printf("Title : %s\n", title);
        printf("Author: %s\n", author);
        printf("Total Copies: %d\n", totalCopies);
        printf("Available Copies: %d\n", availableCopies);
    }

    
    int checkAvailability()
    {
        return availableCopies > 0;
    }

  
    void updateInventory(int change)
    {
        availableCopies += change;
    }


    float calculateFine(int daysLate)
    {
        float rate = 2.0;   
        if(daysLate <= 0)
            return 0;
        return daysLate * rate;
    }
