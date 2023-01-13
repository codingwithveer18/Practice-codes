#include<stdio.h>
   #include<conio.h>
   int main()
   {
    int n, space, row, star;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    
     //  print uper triangle
     for(row = 0; row <= n; row++)
     {
     for(space = n; space > row; space--)
     printf(" ");
     for(star=0; star<row; star++)
     printf("* ");
     printf("\n");
     }
     
     // print lower triangle
     for(row = 1; row < n; row++)
     {
     for(space = 0; space < row; space++)
     printf(" ");
     for(star = n; star > row; star--)
     printf("* ");
     //  move to the next row after print
     printf("\n");
     }
     return 0;
   }