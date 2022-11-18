/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : Codeblocks
Operating system : Windows 11
Assignment class : 3
*/

#include<stdio.h>

int linear_search(int f[20],int k,int flag,int pos,int n){
  int j;
   for(j=0;j<n;j++){

    if(f[j]==k){ pos = j+1;                                    //linear search
                return pos;}

   }

}

int bin_search(int f[20],int k,int flag,int pos,int n){

int j,t,m;
j=0;
t=n-1;
while(j<t){
    m=(j+t)/2;

    if(f[m]==k){ pos = m+1;                                     //binary search
                 return pos;}
     else {
        if(f[m]<k){j=m;}
        else{t=m;}
     }


}

}



int main(){

int n,a[20],x,i,c,pos;
int flag=0;

printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the Array in sorted manner");

for(i=0;i<n;i++){
    scanf("%d",&a[i]);

}

 for(i=0;i<n;i++){

    if(a[i]>a[i+1]){
    printf("Entered Array is not sorted");
    return 1;}
 }
 printf("\nEnter the character to be searched");
 scanf("%d",&x);

 printf("Which type of search you want press 1 for linear search or 2 for binary search");
 scanf("%d",&c);

 switch(c){

       case '1' : printf("Executing the linear search algorithm\n");
                  linear_search(a,x,flag,pos,n);

       case '2' : printf("Executing the binary search algorithm\n");
                  bin_search(a,x,flag,pos,n);

       default : break;

 }





        printf("the search was successful\n");
        printf("The element %d was found on position %f",x,pos);






return 0;
}

