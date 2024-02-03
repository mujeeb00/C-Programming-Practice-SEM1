#include <stdio.h>

// Define a structure to represent a book
struct Book {
    char title[100];
    char author[100];
    char subject[100];
    int bookId;
};

int main() {
    struct Book books[4];

    for (int i = 0; i < 4; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);

        printf("Author: ");
        scanf("%s", books[i].author);

        printf("Subject: ");
        scanf("%s", books[i].subject);

        printf("Book ID: ");
        scanf("%d", &books[i].bookId);

        printf("\n");
    }


    printf("Book Information:\n");
    for (int i = 0; i < 4; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Subject: %s\n", books[i].subject);
        printf("Book ID: %d\n", books[i].bookId);
    }

    return 0;
}

