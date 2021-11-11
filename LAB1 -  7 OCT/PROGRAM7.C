#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
 
    char name[30];
    char usn[10];
    char cgpa[4];
 
} student;
 
int main()
{
    int i, n;
    float cg;
    char c,ch='\n';
    student sts[10];
    FILE *fp,*fp1;
    fp = fopen("file.txt","a");
    printf("Enter the no of students\n");
    scanf("%d",&n);
    printf("Enter %d Students Details \n \n",n);
    for(i=0; i<n; i++)
    {
 
        printf("Student %d:- \n",i+1);
        
        printf("Name: ");
        scanf("%s",sts[i].name);
        fputs(strncat(sts[i].name,&ch,1) , fp);
        printf("USN: ");
        scanf("%s",sts[i].usn);
        fputs(strncat(sts[i].usn,&ch,1), fp);
        printf("CGPA: ");
        scanf("%s",sts[i].cgpa);
        fputs(strncat(sts[i].cgpa,&ch,1), fp);
        
    }
    fclose(fp);
    
    
    printf("Students with CGPA less than 5.0-->:\n");
    for(i=0;i<n;i++)
    {
        cg = atoi(sts[i].cgpa);
        if (cg<5.0)
        printf("%s", sts[i].name);
    }
    
}
