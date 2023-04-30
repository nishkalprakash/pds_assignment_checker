/* Section 2
Roll no: 22ME10015
Name: Ayush chanderia
Assignment number :5
Description: Program to*/
void swap(int *p, int *q){
    int temp;
    temp= *p;
    *p= *q;
    *q=temp;
    return;

}
void reverse(int *a){

}
int main(){
    int n,dir;
    printf("Enter the size of the array and direction: ");
    scanf("%d %d",&n,&d);
    int arr[n];
    printf("Enter %d integers",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array:");
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }




return 0;
}
