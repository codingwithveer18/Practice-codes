#include <stdio.h>
#include<math.h>
int main() {
    
    int a, n, r, value;
    int sum = 0;
    
    printf("Enter First Number of a G.P Series:  ");
    scanf("%d", &a);
    printf("Enter the Common Ratio:  ");
    scanf("%d", &r);
    printf("Enter the Total Numbers in this G.P Series:  ");
    scanf("%d", &n);
    
    value = a;
    for(a = 0; a < n; a++)
    { 
        sum = sum + value;
        value = value * r;
    }
    printf("The Sum of Geometric Progression Series =  %d\n", sum);
    return 0;
}