#include<stdio.h>
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int element1,element2;
    printf("enter element1 :\n");
    scanf("%d",&element1);
    printf("enter element2 :\n");
    scanf("%d",&element2);
    swap(&element1,&element2);
    printf("after swapping : \n");
    printf("element 1 : %d\n",element1);
    printf("element 2 : %d\n",element2);
return 0;
}