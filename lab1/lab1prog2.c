#include<stdio.h>

void reverseArr(int* arr,int length){
    for(int i=0;i<length/2;i++){
        int temp = arr[i];
        arr[i] = arr[length-1-i];
        arr[length-i-1] = temp;
    }
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
    printf("original array is :\n");
    for(int k=0;k<length;k++){
        printf("%d\t",arr[k]);
    }
    printf("\n");

    reverseArr(arr,length);

    printf("reversed array is :\n");
    for(int j=0;j<length;j++){
        printf("%d\t",arr[j]);
    }
    printf("/n");
return 0;
}