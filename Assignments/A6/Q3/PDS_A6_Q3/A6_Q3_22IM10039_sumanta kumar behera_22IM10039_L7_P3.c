# include<stdio.h>
int main () {
    int size, Size;
    printf("Enter size : ");
    scanf("%d", &size);
    int num[size];
    printf("Enter the values : ");
    for(int i=0; i<size; i++) {
       scanf("%d", &num[i]);
    }  
    printf("Enter Size : ");
    scanf("%d", &Size);
    int Num[Size];
    printf("Enter the values : ");
    for(int j=0; j<Size; j++) {
       scanf("%d", &Num[j]);
    }printf("A = ");
     for(int i=0; i<size; i++) {
       printf("%d ", num[i]);
    }printf("\n");
     printf("B = ");
     for(int j=0; j<Size; j++) {
       printf("%d ", Num[j]);
    } printf("\n");
    int arr[size+Size];
    for( int k=0; k<size; k++) {
         arr[k] = num[k];
    }  for(int j=0; j<Size; j++) {
         arr[size+j] = Num[j];   
    }
     printf("C = ");
     for(int i=0; i < size + Size; i++) {
         printf("%d", arr[i]);
    } 
    printf("\n");
    return 0;
    }
