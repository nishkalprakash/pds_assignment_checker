/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3
package          : code blocks
comments         : all are integers
*/
#include<stdio.h>
int linear(int x,int n,int a[])
{
      int i,k;
      for(i=0;i<n;i++){
          if(a[i]==x){
                     k=i;
                     break;
                     }
         if(a[i]!=x) k=-1;
      }
      return(k);
}
int binary(int x);
int main()
{
   int x,i,n,a[20],type,k;
   printf("enter the no.of numbers:");
   scanf("%d",&n);
   while(1){
            printf("\nenter the elements sorted in order:");
            for(i=0;i<n;i++) scanf("%d",&a[i]);
            for(i=0;i<n;i++){
            if(a[i]>a[i+1]){
                            printf("not sorted,enter again\n");
                            continue;
                           }
            else if(a[i]<a[i+1]){
                                break;
                               }
   }
   printf("\nenter the key element which u want to search :");
   scanf("%d",&x);
   printf("\ntype of algorithm linear search(1),binary search(2):");
   scanf("%d",&type);
   if(type=1){
              for(i=0;i<n;i++) k=linear(x,n,a[i]);
              if(k==-1){printf("unsuccessful search\n");}
              else if(k>0){
                           printf("successful search\n");
                           printf("element %d is found at index %d",x,k);
                           }
              }
     if(type=2){
              k=binary(x);
              if(k==-1){printf("unsuccessful search\n");}
              else if(k>0){
                           printf("successful search\n");
                           printf("element %d is found at index %d\n",x,k);
                           }
                }
    else if(type!=1&&type!=2) printf("enter correct type\n");
    return 0;
}



