#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int perfcheck(int k)
{
    int j=1,temp=0;
    while(j<k)
    {
        if(k%j==0)
            temp+=j;
            j++;
    }
    if(temp==k) return 1;
    else return 0;

}
int main()
{
 srand(time(0));
 int n;
 int counter = 0;
 scanf("%d",&n);
 int *g;
 g=(int*)malloc(n*sizeof(int));


for(int i=0;i<n;i++){

   g[i] = 2+ rand()%1000;  //TAKING RANDOM NUMBERS

}

printf("%d-random number array: ",n);  // PRNITNG RANDOM NUMBERS


for(int j=0;j<n;j++)
{

    printf("%d ",g[j]);

}
printf("\n");
 for(int k=0;k<n;k++)
 {
    int w=perfcheck(g[k]);     //CHECKING FOR A PERFECT NUMBER
    if(w==1){
    printf("%d is a perfect number",g[k]);
    counter++;}

 }
  if(counter==0){printf("No perfect number found");}


  return 0;
}


