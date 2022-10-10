// 7. Write a program to print the squares of first 10 natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 1;
    printf("The squares of first ten natural number is:\n");
    while(n <= 10)
    {
        printf("%d\n", n * n);
        n++;
    }
    getch();
    return 0;
}