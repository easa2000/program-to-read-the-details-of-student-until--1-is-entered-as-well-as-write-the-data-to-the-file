#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    typedef struct student
    {
        int roll_no;
        char name[20];
        float fees;
        char DOB[20];
    }STUDENT;

    STUDENT stud;

    system("cls");
    fp = fopen("student_details2.dat","w");
    if(fp == NULL)
    {
        printf("\n File opening error.");
        exit(1);
    }
    printf("\n Enter the roll number: ");
    printf("\n Enter -1 to stop the process...");
    scanf("%d",&stud.roll_no);
    while(stud.roll_no != -1)
    {
        printf("\n Enter the name: ");
        scanf("%s",stud.name);
        printf("\n Enter the fees: ");
        scanf("%f",&stud.fees);
        printf("\n Enter the DOB: ");
        scanf("%s",stud.DOB);

        fprintf(fp," %d \n %s \n %f \n %s \n\n",stud.roll_no ,stud.name ,stud.fees, stud.DOB);

        printf("\n Enter the roll number: ");
        scanf("%d",&stud.roll_no);
    }
    fclose(fp);
    return 0;
}
