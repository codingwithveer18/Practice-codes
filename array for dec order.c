#include <stdio.h>
    void main ()
    {
 
        int number[30];
 
        int i, j, a, n;
        printf("Enter no. of elements is Array\n");
        scanf("%d", &n);
 
        printf("\nEnter the numbers\n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
 
        /*  sorting begins ... */
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 
        printf("\nSorted array in descending order:\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d ", number[i]);
        }
 
    }