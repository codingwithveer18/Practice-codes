#include <stdio.h>
int main() 
{
   int num,i;
   printf("Enter a number to generate a table: ");
   scanf("%d", &num);
   printf("\n table of %d is: " ,num);
   for(i=1;i<=10;i++)
{
    printf("\n%d*%d=%d" ,num,i,(num*i));
}
return 0;
}