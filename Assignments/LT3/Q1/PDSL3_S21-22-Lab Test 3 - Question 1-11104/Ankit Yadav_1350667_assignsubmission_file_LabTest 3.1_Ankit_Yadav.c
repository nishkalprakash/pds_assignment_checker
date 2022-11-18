/*
Name: Ankit Yadav
Roll No : 21EE30005
Section: 3
Department: Electrical Engineering
Operating System: Windows 11
Package: Codeblocks
Lab Test : 3
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

int r,c,i,count=1,flag;
printf("Enter the image size\n");
scanf("%d %d",&r,&c);

int*a[r];

for(i=0;i<c;i++){
    a[i]=(int*)malloc(c*sizeof(int));

}

printf("Enter the image\n");

for(i=0;i<r;i++){

    for(j=0;j<c;j++){

        scanf("%d",&a[i][j]);
    }
}

for(i=1;i<r;i++){

    for(j=1;j<c;j++){
        flag=0;
      if(a[i][j]==1){
        if(a[i-1][j]==1){a[i-1][j]=count;
        flag=1;}

            if(a[i-1][j-1]==1){a[i-1][j-1]=count;
            flag=1;}
            if(a[i][j-1]==1){a[i][j-1]==1;
            flag=1;}
                if(a[i+1][j]==1){a[i+1][j]=count;
                flag=1;}
                    if(a[i][j+1]==1){a[i][j+1]==1;
                    flag=1;}
                        if(a[i+1][j+1]==1){a[i+1][j+1]=count;
                        flag=1;}
                            if(a[i+1][j-1]==1){a[i+1][j-1]=count;
                            flag=1;}
                                if(a[i-1][j+1]==1){a[i-1][j+1]=count;
                                flah=1;}
                                if(flag==1)count++;


      }  ;
    }
}

for(i=0;i<r;i++){

    for(j=0;j<c;j++){

        printf("%d",a[i][j]);
    } printf("\n");
}

printf("The Number of connected components %d",count);

return 0;
}
