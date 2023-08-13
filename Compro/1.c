#include<stdio.h>
#include<string.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
}Book;

int main(){
    int book;
    char id2[10];
    scanf("%d", &book);
    scanf("%s", id2);
    for (int i=0; i<book; i++){
        scanf("%s %s %s", Book.id, Book.name, Book.author);
        if(strcmp(Book.id, id2) == 0){
            printf("%s %s %s", Book.id, Book.name, Book.author);
        }
    }
    if(strcmp(Book.id, id2) != 0){
            printf("Not Found");
        }
    return 0;
}