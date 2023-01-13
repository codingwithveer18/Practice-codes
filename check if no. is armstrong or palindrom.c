#include<stdio.h>  
#include <math.h>
 int main()    
{    
int r,sum=0,temp,num, lastDigit, digits, i, end;;    
printf("enter the number=   ");    
scanf("%d",&end);  
    for(i=1; i<=end; i++)
    {
        /* Copy the value of num for processing */
        num = i;

        /* Find total digits in num */
        digits = (int) log10(num) + 1;

        /* Calculate sum of power of digits */
        while(num > 0)
        {
            /* Extract last digit */
            lastDigit = num % 10;

            // Find sum of power of digits
            // Use ceil() function to overcome any rounding errors by pow()
            sum = sum + ceil(pow(lastDigit, digits));

            /* Remove the last digit */
            num = num / 10;
        }

        /* Check for Armstrong number */
        if(i == sum)
        {
            printf("%d is armstrong ", i);
        }
        else
            printf("%d is not a armstronmg" ,i);
        temp=end;   
         while(end>0)    
            {    
            r=end%10;    
            sum=sum+(r*r*r);    
            end=end/10;    
            }    
            if(temp==sum)    
            printf("but is palindrome ", temp);    
            else    
            printf("but is not palindrome" ,temp);    
             }
return 0;
}
// printf("enter the number=");    
// scanf("%d",&n);    
// temp=n;    
// while(n>0)    
// {    
// r=n%10;    
// sums=(sums*10)+r;    
// n=n/10;    
// }    
// if(temp==sums)    
// printf("palindrome number ");    
// else    
// printf("not palindrome");   
  