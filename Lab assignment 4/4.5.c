#include <stdio.h>
void fibbo_range(int R1, int R2);

int main() {

int R1,R2;

printf("Enter R1 and R2\n");
R1=2;
R2=5;

fibbo_range(R1,R2);

    return 0;
}
void fibbo_range(int R1, int R2)
{
    int first=0,second=1,next=0;
    
    while(next<=R2)
    {
        if(next>=R1)
        printf(" %d ",next);
        
        first=second;
        second=next;
        next=first+second;
    }
    
}
