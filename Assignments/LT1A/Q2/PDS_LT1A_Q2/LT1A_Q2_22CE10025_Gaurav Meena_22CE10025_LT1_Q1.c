/*name:gaurav meena
 roll no: 22CE10025
 test:set'A'
 Q no:1
 description:print pattern
*/ 

# include<stdio.h>

int main(){
int n;
printf("enter the number");
scanf("%d",&n);
int c=0;
for(int i =0; i<n;i++){
  for (int j=0;j<=i;j++){
    

     printf("%d ",++c);

   }
   printf("\n");
 }

return 0;
}
       

 
