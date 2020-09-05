#include <stdio.h>

int main()
{
    int i, n, num, last, sum;
    long fact;

   
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);

    n = num;

    sum = 0;

    
    while(num > 0)
    {

       
        last = num % 10;

        
        fact = 1;
        for(i=1; i<=last; i++)
        {
            fact = fact * i;
        }

       
        sum = sum + fact;

        num = num / 10;
    }

    
    if(sum == n)
    {
        printf("%d is STRONG NUMBER", n);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", n);
    }

    return 0;
}
