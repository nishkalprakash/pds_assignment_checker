#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int arr[100];
int size;
void fill(size){
    for (int i=0; i<size;i++){
        arr[i]=((rand()%900)+100);
    }
    printf("Randomly Filled array is:\n");
    for(int i=0; i<size;i++){
        printf("%d ", arr[i]);
    }
    }
void exchange(size){
    int temp;
     for (int i=0; i<size;i++){
        arr[i]=((rand()%900)+100);
    }
    printf("Original array is:\n");
    for(int i=0; i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\nExchanged array is:\n");
    if (size%2==0){
    for(int i=0; i<size/2;i++){
        temp = arr[i];
        arr[i] = arr[i + size/2];
        arr[i + size/2] = temp;
    }
    }else {
        for(int i=0;i<size/2; i++){
            temp = arr[i];
            arr[i] = arr[i + size/2 + 1];
            arr[i + size/2 + 1] = temp;
        }
    }
    for(int i=0; i<size;i++){
        printf("%d ", arr[i]);
    }

}
void rotate_right(size){
    int temp;
    for (int i=0; i<size;i++){
        arr[i]=((rand()%900)+100);
    }
    printf("Original array is:\n");
    for(int i=0; i<size;i++){
        printf("%d ", arr[i]);
    }
    temp = arr[size-1];
    for(int i =0; i<size-1; i++){
        arr[i+1] = arr[i];
        }
        arr[0] = temp;
        printf("\nRight rotated array is:\n");

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}
void rotate_left(size){
    int temp;
    for (int i=0; i<size;i++){
        arr[i]=((rand()%900)+100);
    }
    printf("Original array is:\n");
    for(int i=0; i<size;i++){
        printf("%d ", arr[i]);
    }
    temp = arr[0];
    for(int i =0; i<size-1; i++){
        arr[i] = arr[i+1];
        }
        arr[size-1] = temp;
        printf("\nRight rotated array is:\n");

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}
void segregate(size){
    int temp[size];
    int count=0;
    for (int i=0; i<size;i++){
        arr[i]=((rand()%900)+100);
    }
    printf("Original array is:\n");
    for(int i=0; i<size;i++){
        printf("%d ", arr[i]);
    }
    for(int i=0; i<size;i++){
        if(arr[i]%2==0){
            temp[count]=arr[i];
            count++;
        }
    }for(int i = 0; i<size; i++){
        if(arr[i]%2!=0){
            temp[count] = arr[i];
            count++;
        }
    }
    printf("\nSegregated array is:\n");
    for(int i=0; i<size; i++){
        printf("%d ", temp[i]);
    }}
void search(size){
    int x;
    for (int i=0; i<size;i++){
        arr[i]=((rand()%900)+100);
    }
    printf("Original array is:\n");
    for(int i=0; i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("Enter a value to be searched: ");
    scanf("%d", &x);
    for(int i=0; i<size; i++){
        if(arr[i]==x){
            printf("\nIndex of location in array is: %d", i);
        }
    }
}
int main(){
    int num;
    printf("Menu choices:\n");
    printf("i.\t 1 ---Fill\nii.\t 2 ---Exchange\niii.\t 3 ---Rotate right\niv.\t 4 ---Rotate left\nv.\t 5 ---Segregate\nvi.\t 6 ---Search\nvii.\t 7 ---Fold\nviii.\t 8 ---Analyze\nix.\t 0,9 or any higher number -- Exit");
    printf("\n\nEnter Choice from Above list: ");
    scanf("%d",&num);
    if (num==1){
        while(1)
        {
            printf("Enter size of array between 1-100: ");
            scanf("%d", &size);
            if(size>=1 && size<=100){
                break;
            }

        }
        fill(size);
    }
    if (num==2){
        while(2)
        {
            printf("Enter size of array between 1-100: ");
            scanf("%d", &size);
            if(size>=1 && size<=100){
                break;
            }

        }
        exchange(size);
    }
    if(num==3){
        while(3)
        {
            printf("Enter size of array between 1-100: ");
            scanf("%d", &size);
            if(size>=1 && size<=100){
                break;
            }

        }
        rotate_right(size);
    }
    if(num==4){
        while(4)
        {
            printf("Enter size of array between 1-100: ");
            scanf("%d", &size);
            if(size>=1 && size<=100){
                break;
            }

        }
        rotate_left(size);
    }
    if(num==5){
        while(5)
        {
            printf("Enter size of array between 1-100: ");
            scanf("%d", &size);
            if(size>=1 && size<=100){
                break;
            }

        }
        segregate(size);
    }
    if(num==6){
        while(6)
        {
            printf("Enter size of array between 1-100: ");
            scanf("%d", &size);
            if(size>=1 && size<=100){
                break;
            }

        }
        search(size);
    }

    return 0;
}
