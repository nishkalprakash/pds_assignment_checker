// Section -2
// Roll No - 22ME10053
// Name :Meet Modi
// Assignment - 03
// Description -Printing the Numero-Pyramid as per given number of rows

#include<stdio.h>

int main(){
    int row;
    printf("Enter the no of rows : ");
    scanf("%d",&row);
    int i,j,k=1,count,l,ctr,change;
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        k=i;
        for(count=1;count<=i;count++){
            if(k>9) k=0;
            printf("%d",k);
            k++;

        }
        l=k-2;
        for(ctr=1;ctr<i;ctr++){
            if(l<0) l+=2;
            printf("%d",l);
            l--;


        }
       printf("\n");
    }


    return 0;
}