/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 09
* Question Number - 02
* Description - Check given vectors are similar or orthogonal
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct vector{
        int arr[15];
    }vector;
vector readvector(int p){
    vector a;
    printf("Enter the elements of vector \n");
   for(int i=0;i<p;i++){
        scanf("%d",&a.arr[i]);
   }
   return a ;
}
void vectorcheck(int n,vector X,vector Y){
    float z,sum=0,t=0,u=0;
    for(int i=0;i<n;i++){
        sum=sum+((X.arr[i])*(Y.arr[i]));
    }
    for(int i=0;i<n;i++){
       t=t+pow(X.arr[i],2);
    }
    for(int i=0;i<n;i++){
       u=u+pow(Y.arr[i],2);
    }
    z= sum/((pow(t,0.5))*(pow(u,0.5)));
    if(z==1||z==-1)printf("Identical vectors");
    else if(z==0)printf("Vectors are orthogonal");
    else printf("The vectors are neither similar nor orthogonal");
}
int main(){
    vector X ;
    vector Y ;
    int n,m; //n==m as for multiplication of vectors number of elements must be equal in both vectors
    printf("Enter the dimension of vector X\n");
    scanf("%d",&n);
     X = readvector(n);
     for(int i=0;i<n;i++){
      printf("%d\n",X.arr[i]);
   }
    printf("Enter the dimension of vector Y\n");
    scanf("%d",&m);
    Y = readvector(m);
    for(int i=0;i<m;i++){
      printf("%d\n",Y.arr[i]);
   }
   vectorcheck(n,X,Y);

    return 0;
}
