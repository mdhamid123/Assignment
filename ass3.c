// 3. Write a program to print the first 10 natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 10;
    while(n >= 1)
    {
        printf("%d\n", n);
        n--;
    }
    getch();
    return 0;
}