#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int i;
    int upper=0,lower=0,num=0,special=0;;
    printf("Enter the string \n");
    gets(str);
    for(i=0; str[i] != '\0'; i++){
        //check for uppercase
            if(str[i]>='A' && str[i]<='Z') {
                upper++;
    }else if(str[i]>='a' && str[i]<='z') {//check lower case
                lower++;
    }else if(str[i]>='0' && str[i]<='9') { //check number
                num++;
    }
    else{
        special++;
    }
    }
    printf("\nUpper case letters: %d",upper);
    printf("\nLower case letters: %d",lower);
    printf("\nNumbers: %d",num);
    printf("\nSpecial characters: %d",special);
    return 0;
}