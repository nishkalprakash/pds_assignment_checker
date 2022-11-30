/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 4
 Description : Program that prints out a pattern based on the user input
*/
#include<stdio.h>
#include<math.h>

int main(){
    int row,R,col;
    scanf("%d",&R);
    for (row=0;row<=R;++row){
        for(col=1;col<=row;++col){     //using nested loops
            if(col%2!=0){           //when col is odd prints 1
                 printf("%d",1);
            }
            else{
                 printf("%d",0);    //when col is even prints 0
            }
        }
        printf("\n");              //do add a new line character
    }
}
            
    
