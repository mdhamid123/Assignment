// 9. Write a program to print the squares of first 10 natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 10;
    printf("The squares of first ten natural number is:\n");
    while(n >= 1)
    {
        printf("%d\n", n * n);
        n--;
    }
    getch();
    return 0;
}