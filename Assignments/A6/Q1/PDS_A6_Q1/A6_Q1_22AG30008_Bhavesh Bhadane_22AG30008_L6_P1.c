#include<stdio.h>

int print_term(int x)
{
	
	if (x==0){
		return 0;
	}
	if(x==1){
		return(1);
	}
	if (x==2){
		return(2);
	}

	else {
		//print_term(x) == 3*print_term(x-1)*print_term(x-2)-2*print_term(x-2)*print_term(x-3)+1;
		return (3*print_term(x-1)*print_term(x-2)-2*print_term(x-2)*print_term(x-3)+1);
	}
}

int main()
{
	int k,i,n;
	printf("Enter the value of terms\n");
	scanf("%d",&n);
	k= print_term(n);

	for(i=0;i<n;i++){
		printf("%d ",print_term(i));
	}
	return 0;
}