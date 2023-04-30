#include <stdio.h>
void swap(int p, int q){
 printf("p=%d, q=%d",q,p);

printf("%d, %d",q,p);
return;}

main(){
int x, y, z;
scanf("%d %d",&x, &y);
z=swap(x, y);
printf("%d", z);
}
