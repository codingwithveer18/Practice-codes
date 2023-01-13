
#include <stdio.h>
#include <stdlib.h> // For exit()
  
int main()
{
    FILE *fptr1, *fptr2;
    char filename[100], c;
  
    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);
  
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);
  
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
  
    printf("\n Contents copied to %s", filename);
  
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>
// void main(int argc,char *argv[])
// {
// char ch;
// FILE *  mainfile;
// FILE *  copyfile;
// if(argc !=3){
//     printf("\nCan not open file for reading…");
//     exit(0);
// }
// mainfile = fopen(argv[1],"r");
// copyfile = fopen(argv[2],"w");
// if(mainfile==NULL || copyfile==NULL){
//     printf("File opening Error or file not Found");
//     exit(0);
// }
// ch=fgetc(mainfile);
// while ((ch!=EOF))
// {
//     fputc(ch,copyfile);
//     ch = fgetc(mainfile);
// }
// printf("\nFile copied successful\n");
// fclose(mainfile);
// fclose(copyfile);
// }