#include<stdio.h>

int linearSearch(int* arr,int length,int element){
    int idx=-1;
    for(int i=0;i<length;i++){
        if(arr[i]==element){
            idx=i;
            return idx;
        }
    }
    return idx;
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

    printf("enter element to be searched :\n");
    int element;
    scanf("%d",&element);
    int idx = linearSearch(arr,length,element);
    if(idx==-1) printf("element %d not found.\n",element);
    else printf("element %d found at index %d.\n",element,idx);
return 0;
}