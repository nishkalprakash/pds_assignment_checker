
//NAME : HARSH PATIDAT
// ROLL NO . : 22MF10015
// SECTION : 2
// PROBLEM 2
//DESCRIPTION ;
 #include<stdio.h>
int primecheck(int f );

 int main (){
     int n,x,i,f,a; //n is the number
     printf("enter the number");
     scanf("%d",&n);
    a=primecheck(n);
     if (a==-1)
        {
        printf("%d",a);
        }
     else {
           if(n/2==0 &&n>=4){
        for(x=2;x<=(n-2);x++){
                i=n-x;


           if (primecheck(x)==1 && primecheck(i)==1)
            {
                printf("%d,%d",x,i);
           break;
            }
        }}
     }

 }
 int primecheck(int f)
 {
     int z,l=0;
     for(z=2;z<=(f/2);z++){

        if(f%z==0)
            {
            l++;
             return 0 ;
            }

        }
if (l==0){
            return 1;
}


