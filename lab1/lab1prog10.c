#include<stdio.h>
#include<stdlib.h>
struct student{
        int rollNumber;
        char name[30];
        float marks;
};

int searchHighestMark(struct student* arr,int length){
    int max = 0;
    for(int i=1;i<length;i++){
        if(arr[i].marks>arr[max].marks) max = i;
    }
    return max;
}

int main(){
    int length;
    printf("enter the number  of students :\n");
    scanf("%d",&length);
    printf("enter details of %d students one by one.\n",length);
    struct student* arr = (struct student*)malloc(length*sizeof(struct student));
    for(int i=0;i<length;i++){
        printf("enter detail of %d stduent\n",i+1);
        printf("enter roll number:\n");
        scanf("%d",&arr[i].rollNumber);
        printf("enter name :\n");
        scanf("%[^\n]",&arr[i].name);
        printf("enter marks:\n");
        scanf("%f",&arr[i].marks);
    }

    int idx = searchHighestMark(arr,length);
    printf("the student with highest marks is:\n");
    printf("---------------------------------------------------\n");
    printf("Roll\t\t\tName\t\t\tMarks\n");
    printf("---------------------------------------------------\n");
    printf("%d\t\t\t%s\t\t\t%.2f\n",arr[idx].rollNumber,arr[idx].name,arr[idx].marks);

    free(arr);
return 0;
}