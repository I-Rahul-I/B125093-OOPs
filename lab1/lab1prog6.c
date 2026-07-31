#include<stdio.h>
#include<stdlib.h>
int main(){
    struct student{
        int rollNumber;
        char name[30];
        float marks;
    };
    printf("enter details of 5 students one by one.\n");
    struct student* arr = (struct student*)malloc(5*sizeof(struct student));
    for(int i=0;i<5;i++){
        printf("enter detail of %d stduent\n",i+1);
        printf("enter roll number:\n");
        scanf("%d",&arr[i].rollNumber);
        printf("enter name :\n");
        scanf(" %[^\n]",&arr[i].name);
        printf("enter marks:\n");
        scanf("%f",&arr[i].marks);
    }

    printf("printing details:\n");
    printf("--------------------------------------------------------------------------------------\n");
    printf("| %-10s | %-30s | %-10s |\n", "Roll No", "Name", "Marks");
    printf("--------------------------------------------------------------------------------------\n");
        
    for(int j=0;j<5;j++){
        printf("| %-10d | %-30s | %-10.2f |\n", arr[j].rollNumber, arr[j].name, arr[j].marks); 
        printf("--------------------------------------------------------------------------------------\n");
    }
return 0;
}