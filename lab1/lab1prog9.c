#include<stdio.h>
#include<stdlib.h>
struct student{
        int rollNumber;
        char name[30];
        float marks;
};
int main(){
    printf("enter details of 5 students one by one.\n");
    struct student* arr = (struct student*)malloc(5*sizeof(struct student));
    for(int i=0;i<5;i++){
        printf("enter detail of %d stduent\n",i+1);
        printf("enter roll number:\n");
        scanf("%d",&(arr+i)->rollNumber);
        printf("enter name :\n");
        scanf("%[^\n]",&(arr+i)->name);
        printf("enter marks:\n");
        scanf("%f",&(arr+i)->marks);
    }

    printf("printing details:\n");
    printf("---------------------------------------------------\n");
    printf("Roll\t\t\tName\t\t\tMarks\n");
    printf("---------------------------------------------------\n");
        
    for(int j=0;j<5;j++){
        printf("%d\t\t\t%s\t\t\t%.2f\n",(arr+j)->rollNumber,(arr+j)->name,(arr+j)->marks);
        printf("---------------------------------------------------\n");
    }
return 0;
}