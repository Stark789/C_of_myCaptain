#include<stdio.h>
struct employee
{
    int phnumber,age,salary;
    char name[25];
}emp[100];

void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as  name , age , phone number , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",&emp[i].name,&emp[i].age,&emp[i].phnumber,&emp[i].salary);
    }
    printf("\nEMP_NAME\t\tEMP_AGE\t\tEMP_PHONE_NUMBER\tEMP_SAL\n");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phnumber,emp[i].salary);
    }
}
