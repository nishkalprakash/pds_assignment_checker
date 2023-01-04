/* NAME-GAURAV MEENA
  ROLL NO -22CE10025
  ASSIGNMENT NO-6
  DESCRIPTION- merge
*/

#include<stdio.h>
int merge (int size1,int size2,int *ptr1,int *ptr2){
}

int main(){
  int size1,size2;
 printf("enter size:");
 scanf("%d",&size1);

int a[size1];
int i;
printf("enter array:");
 for (i=0;i<size1;i++){
    scanf("%d",&a[i]);
}
printf("enter size2");
scanf("%d" , &size2);
int b[size2];
int j;
 for (j=0;j<size2;j++){
scanf("%d",&b[j]);
}

for(int i=0; i<size1 ; i++){
	printf("%d" , a[i]);
}


 return 0;
}



