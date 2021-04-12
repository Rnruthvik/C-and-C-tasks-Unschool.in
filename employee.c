#include <stdio.h>
#include <stdlib.h>
struct employee
{
  char name[20];
  char id[20];
  float experience;
  float salary;
};
int main()
{
    struct employee e1[10];
    int i=0;
    printf("Enter employee details:\n");
    for(i=0;i<1;i++)
    {
        printf("Enter employee %d name:\n",i+1);
        scanf("%s",&e1[i].name);
        printf("Enter employee %d id:\n",i+1);
        scanf("%s",&e1[i].id);
        printf("Enter employee %d experience:\n",i+1);
        scanf("%f",&e1[i].experience);
        printf("Enter employee %d salary:\n",i+1);
        scanf("%f",&e1[i].salary);
    }
    printf("\nDetails of employees are ....");
        for(i=0;i<1;i++)
    {
        printf("\nEmployee %d name is %s",i+1,e1[i].name);
        printf("\nEmployee %d id is %s",i+1,e1[i].id);
        printf("\nEmployee %d experience is %f",i+1,e1[i].experience);
        printf("\nEmployee %d salary is %f",i+1,e1[i].salary);

    }
        return 0;
}
