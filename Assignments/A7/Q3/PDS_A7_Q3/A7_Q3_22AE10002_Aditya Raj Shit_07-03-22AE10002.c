/*
*Name-Aditya Raj Shit
*Roll no- 22AE10002
*Section- 2
*Assignment no.- 3
*/

#include<stdio.h>

int main()
{
    int n;
    printf("How many names you want to enter: ");
    scanf("%d",&n);

    char **names;
    names=(char**)malloc(n*sizeof(char*));
    int size=100;
    int count=0;
    /*for(int i=0;i<n;i++){
        *(*names+i)=(char*)malloc(100*1);
    }*/
    for(int i=0;i<n;i++){
            for(int j=0;j<size;j++){
                count++;
                if(count>size){
                    realloc(*(names+i),size+10);
                }
                scanf("%s",&names[i][j]);
            }

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<size;j++){
           printf("%s",names[i][j]);
        }
        printf("\n");
    }
}
