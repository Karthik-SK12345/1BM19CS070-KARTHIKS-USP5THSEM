#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
 
    char name[30];
    char id[10];
    char salary[8];
 
} Employee;
 
int main()
{
    int i, n, sal1, sal2;
    char c,ch='\n';
    Employee employees[2];
    FILE *fp,*fp1;
    fp = fopen("file.txt","a");
    printf("Enter %d Employee Details \n \n",2);
    for(i=0; i<2; i++)
    {
 
        printf("Employee %d:- \n",i+1);
        
        printf("Name: ");
        scanf("%s",employees[i].name);
        fputs(strncat(employees[i].name,&ch,1) , fp);
        printf("Id: ");
        scanf("%s",employees[i].id);
        fputs(strncat(employees[i].id,&ch,1), fp);
        printf("Salary: ");
        scanf("%s",employees[i].salary);
        fputs(strncat(employees[i].salary,&ch,1), fp);
        
    }
    fclose(fp);
    fp1 = fopen("file.txt","r");
    printf("Employee details:\n");
    c = fgetc(fp1);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fp1);
    }
    fclose(fp1);
    sal1 = atoi(employees[0].salary);
    sal2 = atoi(employees[1].salary);
    printf("The employee with a better pay: ");
    if(sal1<sal2 )
    printf("%s", employees[1].name);
    else if(sal1>sal2)
    printf("%s", employees[0].name);
    else
    printf("Both have same pay");
    
}
