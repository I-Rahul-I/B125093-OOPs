#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("enter length of the array:\n");
    int length;
    scanf("%d",&length);
    int* arr = (int*)malloc(length*sizeof(int));
    for(int i=0;i<length;i++){
        printf("enter element %d :\n",i+1);
        scanf("%d",arr+i);
    }

    printf("displaying elements :\n");
    for(int j=0;j<length;j++){
        printf("%d\t",arr[j]);
    }
    printf("\n");
    free(arr);
return 0;
}