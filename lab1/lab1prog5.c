#include<stdio.h>
int sumArr(int* arr,int length){
    int sum = 0;
    for(int i=0;i<length;i++){
        sum+= *(arr+i);
    }
    return sum;
}
int main(){
    int length;
    printf("enter lengthh of the array:\n");
    scanf("%d",&length);
    int arr[length];
    for(int i=0;i<length;i++){
        printf("enter element %d : ",i+1);
        scanf("%d",arr+i);
    }
    int sum = sumArr(arr,length);
    printf("Sum of all elements in the array is :%d\n",sum);
return 0;
}