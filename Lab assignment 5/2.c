#include <stdio.h> 
int main() 
{ 
    int r = 0, num, n, i;
    unsigned long long fact = 1;
    int shubhamgosai;
    printf("enter1 for Factorial of a number\n");
    printf("enter2 for Reverse of a number\n");
    printf("enter3 for factor of a number\n"); 
    scanf("%d",&shubhamgosai);   
    switch(shubhamgosai)
        {
    case 1:
    printf("Enter an integer\n ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) 
        {
            fact *= i;
        }
        {
    printf("Factorial of %d = %llu", n, fact);        
        }
    break;
   
     
    case 2:
    printf("Enter a number to reverse\n");
    scanf("%d", &n);
    while (n != 0)
        {
    r = r * 10;
    r = r + n%10;
    n = n/10;
        }
    printf("Reverse of the number = %d\n", r);
    break;
   
     
    case 3:
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
        } 
    break;
    default:
    printf("error choose correct option");
    }
        return 0;
        
}
  
  
