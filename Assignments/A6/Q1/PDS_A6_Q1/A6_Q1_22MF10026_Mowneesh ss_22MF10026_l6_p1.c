#include<stdio.h>
#include<lib.h>


int main()
int print_term(int n){
	if(n>0 &&n<2)
	return n;
else
	return 3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*(print_term(n-2)+1;

}
{
int m;
printf("enter the number of terms:");
scanf("%d", &m);
	if(m<0){
	   printf("invalid input");
}
else{
	for(int n=0; n<m, n++){
	printf("%d", print_term(i));
}

return 0;
}
