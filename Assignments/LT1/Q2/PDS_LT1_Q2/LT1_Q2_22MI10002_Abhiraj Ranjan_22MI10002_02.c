/* Name: Abhiraj Ranjan
Roll No.: 22MI10002
Section: 2
Lab Test
Question: 2
Description: Playing with numbers */
#include<stdio.h>
#include<math.h>
int main(){
long int n,i,m,d,t;
printf("Enter the integer: ");
scanf("%ld",&n);
if(n<0) n=-1*n;
m=n;
d=1;
for(i=10;i<n;i=i*10){
    d++;
}
//printf("%ld",d);
m=n;
if(n%2==0){
    i=0;
    printf("Most significant digits to least significant digits:\n");
    while(d!=0){
            if(d==1)
             printf("%.0lf ",(m/(pow(10,d-1))));
   else printf("%.0lf, ",(m/(pow(10,d-1))));
    d--;
    }
    printf("\n\n");
}

d=1;
for(i=10;i<n;i=i*10){
    d++;
}
//printf("%ld",d);
m=n;
if(n%2!=0){
    printf("Least Significant digits to most significant digits: \n");
    while(d!=0){
      t=m/(pow(10,d-1));
      t*=pow(10,d-1);
      if((m-t)==0){
        printf("%ld",m);
      }
    else printf("%ld, ",m);
      m=m-t;
      d--;
    }
    }

/*m=n;
while(d!=0){
    printf("%ld",(int)m%(int)(pow(10,d-1)));
d--;
}*/
return 0;
}
