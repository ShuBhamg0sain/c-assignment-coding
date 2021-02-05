Draw a flow chart and write a c program to find the sum of odd and sum of even numbers between range 1 to N.
#include <stdio.h>
 
void main()
{
    int i, num, odd_sum = 0, even_sum = 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}










#include <stdio.h> 
#include <string.h>
int main() 
{ 
	  char Str[100];  
	  char Str1[100];
	  char Str2[100];
    int r = 0, num, n, i;
    unsigned long long fact = 1;
    int shubhamgosai;
    printf("enter1 for find the length of  string\n");
    printf("enter2 for area of Reverse of a number\n");
    printf("enter3 for Concatenate two strings\n"); 
    scanf("%d",&shubhamgosai);   
    switch(shubhamgosai)
        {
    case 1:
    printf("Enter the String\n "); 
    scanf("%s", Str); 
    printf("Length of Str is %ld", strlen(Str)); 
    break;
    
   
    case 2:
    printf("Enter the string\n");
    scanf("%s",Str);
    for(i=0; Str[i]!='\0'; i++);
    printf("Reverse is = ");
    for(i--; i>=0; i--)
    {
    printf("%c",Str[i]);
    }
    break;
    case 3:
    printf("Enter first string\n");
    scanf("%s",&Str1);
    printf("Enter second string\n");
    scanf("%s",Str2);
    strcat(Str1,Str2);
    printf(" concatenate two strings is %s", Str1);
    break;  
    default:
    printf("error choose correct option");
        }
    return 0; 
}















# assignment 1

## Question 1
* A farmer wants to fence with three rounds of wire in his rectangular plot of length 20 metres and breadth 15 metres. Calculate the total wire to be purchased. If the cost per metre of wire is 400 rupees, also calculate the total cost of fencing.

  ![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-assignment-coding/main/Lab%20assignment%201/IMG_20201220_181502.jpg)



## Question 2
* WAP to convert temperature from Fahrenheit to celsius.

  ![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-assignment-coding/main/Lab%20assignment%201/IMG_20201220_181428.jpg)




## Question 3
* WAP to exchange two numbers using a temporary variable and without.

# without temporary variable

  ![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-lab-assignment/main/Lab%20assignment%201/Screenshot_20201225_094840.jpg)

# temporary variable

  ![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-assignment-coding/main/Lab%20assignment%201/IMG_20201220_181529.jpg)




# assignment 2

## Question 1

* WAP to input an decimal number (base 10) and display its hex and octal equivalents.
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-lab-assignment/main/Lab%20assignment%202/IMG_20201228_094236.jpg)





## Question 2

* WAP to check whether a given number is even or odd.
	a) Using if-else
	b) Using switch-case
	c) Using conditional/ternary
# a) Using if-else 
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-assignment-coding/main/Lab%20assignment%202/Screenshot_20201220_192113.jpg)


# b) Using switch-case

![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%202/IMG_20201228_200445.jpg)

# c) Using conditional/ternary
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%202/Screenshot_20201228_210745.jpg)


## Question 3


* Area of a valid triangle using Heron's Formula. (Sum of any two sides must be greater than the third side).

![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-lab-assignment/main/Lab%20assignment%202/Screenshot_20201221_004152.jpg)



# Assignment 3

## Question 1



* WAP that will display the grade of a student provided his/her percentage in 6 subjects according to following criteria:
	a) Percentage > 80 then Grade = A
	b) Percentage between 61 & 80 then Grade = B
	c) Percentage between 51 & 60 then Grade = C
	d) Percentage between 41 & 50 then Grade = D
	e) Percentage between 35 & 40 then Grade = E
	f) Percentage < 35 then Grade = F
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-assignment-coding/main/Lab%20assignment%203/IMG_20201220_212434.jpg) ![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-assignment-coding/main/Lab%20assignment%203/IMG_20201220_212506.jpg)


## Question 2

* WAP to find minimum of three numbers:
	a) Using if else
	b) Using conditional/ternary operator
	c) Using arithmetic operation (subtraction)
# a) Using if else
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%203/IMG_20201228_205008.jpg)


# b) Using conditional/ternary operator
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%203/IMG_20201229_085123.jpg)


# c) Using arithmetic operation (subtraction)
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%203/Screenshot_20201229_123947.jpg)

## Question 3

* WAP to find the average of top three test results out of four conducted. (eliminate the smallest one).

![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-assignment-coding/main/Lab%20assignment%203/IMG_20201221_000040.jpg)![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-assignment-coding/main/Lab%20assignment%203/IMG_20201221_000125.jpg)




## Question 4

* WAP to determine leap year or not using Logical AND, OR operators and conditional statements.
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-assignment-coding/main/Lab%20assignment%203/Screenshot_20201221_001310.jpg)




# Assignment 4

## Question 1

* WAP to compute net salary? (NS=BP+HRA+TA +DA), Where BP (Basic pay would be enter by user) HRA=10% of BP, TA=5%of BP DA=15%of BP
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%204/IMG_20210116_171011.jpg)


## Question 2

* WAP to print the sum of digits of any number?
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%204/Screenshot_20210116_173602.jpg)



## Question 3

* WAP to find the factorial of a number?
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%204/IMG_20210117_101928.jpg)



## Question 4

* WAP to generate fibonacci series? (0,1,1,2,3,5,8,13,21����N.). Ask user to enter the value of N.
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%204/IMG_20210117_101913.jpg)


## Question 5

* Write a menu driven program to find area of - 
	A. Circle
	B. Rectangle
	C. Triangle

![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%204/IMG_20210117_105140.jpg)

# Assignment 5

## Question 1

* WAP to generate following pattern
			ABCDEFGFEDCBA
			ABCDEF FEDCBA
			ABCDE   EDCBA
			ABCD	 DCBA
			ABC	  CBA
			AB	   BA
			A	    A

![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%205/IMG_20210119_231105.jpg)



## Question 2

* Write a menu driven program  using functions to find ? A) Factorial of a number B) Reverse of a number, and C) factor of a number.
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%205/IMG_20210120_153205.jpg)
![ ](https://raw.githubusercontent.com/ShuBhamg0sain/c-------------------lab------------------assignment/main/Lab%20assignment%205/IMG_20210120_153133.jpg)



## Question 3

* Write a menu driven program to perform the following operation on input strings Using function. a)Find the length of the string b)Reverse the string c)Concatenate two strings, and d)Compare two strings. Do not use library functions for the same.





