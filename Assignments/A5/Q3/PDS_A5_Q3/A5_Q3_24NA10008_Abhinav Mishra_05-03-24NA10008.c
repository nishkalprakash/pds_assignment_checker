#include <stdio.h>
void main() {
int a[100],i,b,a3[100],n;
printf("enter the value of n\n");
scanf("%d", &n);
printf("Enter elments\n");
for(i=0;i<n;i++) {
scanf("%d",&a[i]);  //TAKING VALUES FROM USER
}
printf("enter values of needle");
scanf("%d",&b);
printf("ENTER values");
for (int i=1;i<n;i++) {
scanf("%d", &a3[i]);
printf("Haystack");
for(i=0;i<n;i++) {
printf("%d", a3[i]);
printf("\n");

}
}
}





