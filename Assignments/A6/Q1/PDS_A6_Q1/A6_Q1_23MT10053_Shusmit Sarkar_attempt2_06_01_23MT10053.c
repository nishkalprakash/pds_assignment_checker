#include<stdio.h>
#include<stdlib.h>
int arr[100];
int size;
void fill(){
    while(1)
                {
                    printf("Enter the size");
                    scanf("%d",&size);
                    if(size>0 && size<=100)
                        break;
                }
    for(int i=0; i<size; i++){
        arr[i] = 100+ ( rand()%900) ;
    }
    for(int i=0; i<size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return;
}
void exchange(){
    for(int i=0; i<size; i++)
    {
        printf("arr[%d] = %d  ", i, arr[i]);
    }
    for(int i=0; i<size/2; i++)
    {
        if(size%2 ==0)
        {
            for(int j= size/2; j<size; j++ )
            {
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
        else
        {
            for(int j= (size/2) + 2; j<size; j++ )
            {
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    printf("New array\n");
    for(int i=0; i<size; i++)
    {
        printf("arr[%d] = %d ", i, arr[i]);
    }
    return;
}
int main(){
    int n;
    for(int i=0; ;i++)
    {
        printf(" 1 --- Fill\n 2---Exchange\n 3---Rotate right\n 4---rotate left\n 5---Segregate\n 6---Search\n 7---Fold\n 8---Analyze\n 0,9 or any higher--- Exit");
        printf("\nEnter choice ");
        scanf("%d",&n);
        if(n<0 || n>=9){
            printf("Exit");
            break;
        }
        else{
            if(n==1) fill();
            if(n==2) exchange();
            }
    }
   return 0;
}
