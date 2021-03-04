#include <stdio.h> 
#include <string.h>
int main() 
{  
  	char strr1[20], strr2[20];
    int i=0, c=0;
	  char s1[100] , s2[100] ;
 	 char rev[1000];
	  int count = 0;
	  int  j = 0, k = 0, x, len;
    char str[100], str1[10][20], temp;
	  char Str[1000];  
    int shubhamgosai;
    printf("enter1 for find the length of  string\n");
    printf("enter2 for area of Reverse of a number\n");
    printf("enter3 for Concatenate two strings\n");
    printf("enter4 for comparing two strings\n");   
    scanf("%d",&shubhamgosai);   
    switch(shubhamgosai)
        {       	
    case 1:
    printf("Enter the String:\n "); 
    scanf("%s", Str);   
    for (i = 0; Str[i] != '\0'; ++i);   
    printf("Length of Str is %d\n", i); 
    break;
    
       
    case 2:
    scanf("%s", str);
    printf("\nString Before Reverse: %s", str);  
    while (str[count] != '\0')
   {
    count++;
   }
   j = count - 1;
   for (i = 0; i < count; i++)
   {
   rev[i] = str[j];
   j--;
   }
   printf("\nString After Reverse: %s", rev);
   break;


   case 3:
   printf("enter first string");
   scanf("%s", &s1);
   printf("enter second string");
   scanf("%s", &s2);
   int length, j;
   length = 0;
   while (s1[length] != '\0') {
    ++length;
   }
   for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
   }
   s1[length] = '\0';
   printf("After concatenation: ");
   puts(s1);
    break;
   
    
    case 4:    
  printf("\nEnter first string :: ");
  gets(strr1);
  printf("\nEnter second string :: ");
  gets(strr2);
  printf("\nStrings are :: \n\n");
  puts(strr1);
  puts(strr2); 
  while((strr1[i]!='\0') || (strr2[i]!='\0'))
  {
   if (strr1[i] != strr2[i])
                c++;
                i++;
  }
   if(c==0)
   puts("\nStrings are equal.\n");
   else
   puts("\nStrings are not equal.\n");    
   break;
    
    default:
    printf("error choose correct option");
        }        
 }

