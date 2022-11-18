/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : codeblocks
Operating System : Windows 11
Assignment class : 5
*/


#include<stdio.h>
#include<stdlib.h>


void saddlepoint(int z,int x,int y, int*arr[]){

int p=0,q=0;

for(i=0;i<r;i++){
    for(j=0;j<c;j++){

        if(z>arr[i][j]&&z!=arr[i][j])
            p++
    }
}
if(p!=0){

printf("The Element %d at [%d][%d] is a saddle point\n",arr[i][j],i,j);
    }
}
}



}




int main(){

int r,c,i,j,m;
int *arr[r];

printf("Enter the array\n");

for(i=0;i<r;i++){

    arr[i]=(int*)malloc(c*sizeof(int));
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){

        scanf("%d",&arr[i][j]);
    }
}


for(i=0;i<r;i++){
    for(j=0;j<c;j++){

        m=arr[i][j];
        saddlepoint(m,i,j,arr);
    }
}

return 0;
}
