#include<stdio.h>
#include<stdlib.h>
struct student{
        int rollNumber;
        char name[30];
        float marks;
};

int searchHighestMark(struct student* arr){
    int max = 0;
    for(int i=1;i<5;i++){
        if(arr[i].marks>arr[max].marks) max = i;
    }
    return max;
}

float averageClass(struct student* arr){
    float sum = 0;
    for(int i=0;i<5;i++){
        sum+= arr[i].marks;
    }
    return (float)sum/5;
}

int main(){
    printf("enter details of 5 students one by one.\n");
    struct student* arr = (struct student*)malloc(5*sizeof(struct student));
    for(int i=0;i<5;i++){
        printf("enter detail of %d stduent\n",i+1);
        printf("enter roll number:\n");
        scanf("%d",&arr[i].rollNumber);
        printf("enter name :\n");
        scanf("%[^\n]",&arr[i].name);
        printf("enter marks:\n");
        scanf("%f",&arr[i].marks);
    }

    int idx = searchHighestMark(arr);
    printf("the student with highest marks is:\n");
    printf("%d\t\t\t%s\t\t\t%.2f\n",arr[idx].rollNumber,arr[idx].name,arr[idx].marks);

    printf("Average of class is : %.2f\n",averageClass(arr));

return 0;
}