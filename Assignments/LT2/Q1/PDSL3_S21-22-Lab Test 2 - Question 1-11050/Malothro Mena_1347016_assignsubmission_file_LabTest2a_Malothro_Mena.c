# include<stdio.h>
int maxsum(int a[],int size){
    int max_so=-9999,max_end=0;
    int i;
    for(i=0;i<size;i++){
        max_end=max_end +a[i];
        if (max_so<max_end)
            max_so =max_end;
        if (max_end<0);
    }return max_so;

}
int main(){
    int n;
    //getting the no. of elements in the array
    printf("enter the no. of elements in the array:");
    scanf("%d",&n);
    int array[n];
    int i;
    // getting the elements
    printf("enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d", & array[i]);
    }
    //for the max of sub array
    int max_sum= maxsum(array,n);
    // printing the result
    printf("maximum contigous sum is %d", max_sum);
    return 0;

}
