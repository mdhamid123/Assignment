// 5. Write a program to print the first 10 even natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 10;
    while(n >= 1)
    {
        printf("%d\n", 2 * n);
        n--;
    }
    getch();
    return 0;
}