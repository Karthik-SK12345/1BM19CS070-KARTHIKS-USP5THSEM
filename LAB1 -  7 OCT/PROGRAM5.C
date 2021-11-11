#include <stdio.h>

int main()
{
    FILE *fp, *fp1;
    char st[20],c;
    
    fp = fopen("file.txt","w");
    printf("Enter a string:\n");
    scanf("%s", st);
    fputs(st,fp);
    
    fclose(fp);
    fp1 = fopen("file.txt","r");
    c = fgetc(fp1);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fp1);
    }
    fclose(fp1);
    return 0;
}
