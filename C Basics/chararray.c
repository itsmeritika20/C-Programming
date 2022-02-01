#include<stdio.h>
int main()
{
    struct Books
    {
    char name[50];
    char author[50];
    int price;
} book;


void printStruct(struct Books bk)
{
    printf("Book name is %s\n", bk.name);
    printf("Author name is %s\n", bk.author);
    printf("Book Price is %d\n", bk.price);
}
}