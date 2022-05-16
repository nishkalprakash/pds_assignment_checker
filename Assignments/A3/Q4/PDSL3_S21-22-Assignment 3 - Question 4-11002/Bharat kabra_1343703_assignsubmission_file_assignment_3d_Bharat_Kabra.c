/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Assignment class: 3
*/
#include<stdio.h>
#include<stdlib.h>


int bin_search(int x, int a[100], int s, int l)
{
  while (s <= l)
  {
    int m = s + (l-s)/2;
    if (a[m] == x)
        return m;
    if (a[m] < x)
        s = m + 1;
    else
         l = m - 1;
  }
  return -1;
}



int linear_search(int n,int x,int a[100]){

    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }

    return -1;

}




int main(){
    int n;
    int x;
    int a[100];
    printf("Enter the number of elements n:");
    scanf("%d",&n);
    printf("Enter the elements in sorted order:");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int flag=0;
    for(int j=0;j<n-1;j++){
        if(a[j]>=a[j+1]){
            flag=-1;
            break;
        }
     }
           printf("Enter the key element x, which you want to search:\n");
     scanf("%d",&x);



     if(flag==-1){
      printf("Not sorted. Enter again \n");
      main();
     }else{
        printf("Choose the algorithm: Type 1 for linear search and 2 for binary search\n");
        scanf("%d",&flag);
        if(flag==1){
            printf("Successful search \nElement %d has been found at the index %d",x,linear_search(n,x,a));
            //printf("%d",linear_search(n,x,a));
        }if(flag==2){
            printf("Successful search \nElement %d has been found at the index %d",x,bin_search(x,a,0,n-1));
           // printf("%d",bin_search(x,a,0,n-1));

        }


     }

    return 0;
}
