#include<stdio.h>
#include<math.h>
int main()
{
    int x, y = 1, i = 1;
    printf("Enter a decimal number"); 
    scanf("%d", &x); //decimal input
    while(x != 0){
        y *= x % 2;
        y *= pow(10, 1);
        x /= 2;
        i++;
    }
    printf("The binary number for the decimal input is: %d", y);
    return 0;
}
