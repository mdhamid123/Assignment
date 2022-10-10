// 4. Write a program to print the first 10 even natural numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 1;
    while(n <= 10)
    {
        printf("%d\n", 2 * n);
        n++;
    }
    getch();
    return 0;
}