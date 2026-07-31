#include<stdio.h>
int maxarr(int* arr,int length){
    int max = arr[0];
    for(int i=1;i<length;i++){
        if(arr[i]>max) max = arr[i];
    }
    return max;
}
int minarr(int* arr,int length){
    int min = arr[0];
    for(int i=1;i<length;i++){
        if(arr[i]<min) min = arr[i];
    }
    return min;
}
float averagearr(int* arr,int length){
    int sum = 0;
    for(int i=0;i<length;i++){
        sum+= arr[i];
    }
    return (float)sum/length;
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
    int max1 = maxarr(arr,length);
    printf("max element is : %d\n",max1);
    int min1 = minarr(arr,length);
    printf("min element is : %d\n",min1);
    float average1 = averagearr(arr,length);
    printf("average is : %.2f\n",average1);
return 0;
}