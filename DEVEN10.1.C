#include <stdio.h>
struct BookDetail
{
    char title[50];
    char author[50];
    float amount;
};
void displayBookDetails(struct BookDetail book)
{
    printf("Book Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Amount: $%.2f\n", book.amount);
}
int main() {
    struct BookDetail myBook;
    printf("Enter Book Title: ");
    scanf("%[^\n]%*c", myBook.title);
    printf("Enter Author: ");
    scanf("%[^\n]%*c", myBook.author);
    printf("Enter Amount: ");
    scanf("%f", &myBook.amount);
    printf("\nBook Details:\n");
    displayBookDetails(myBook);
    printf("\nCreated by 23CE079");

    return 0;
}
