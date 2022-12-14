/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : Test 1
 Description : Print out pattern based on user input
*/

#include<stdio.h>
#include<math.h>

int main(){
    int n;       //taking the number from the user
    scanf("%d",&n);
    for(int i=1;i<=n;i++){         //for nnumber of rows
        for(int j=1;j<=i;j++){      //for number of columns
            printf("%d",i);        //prints i for i times
        }
        printf("\n");               //to make the take the cursor to next row
     }
}
