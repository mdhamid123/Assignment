// 6. Write a program to print the first 10 odd natural numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 1, i = 0;
    while(n <= 10)
    {
        printf("%d\n", n + i);
        n++;
        i = i + 1;
    }
    getch();
    return 0;
}