Sec:14
Name sourabh kumar yadav
Roll no : 22EE10068
Assignment : 11
Question no : 4

int main()
{
int n i;
printf("enter the value of n\n");
scanf("%d",&n);
printf("fibonaci serise is : n");
for(i=o;i<n;i++)
printf("%d\n",fibonacci(i));
return o;
}
int fibonacci(int i)
{
	if(i=0)
		return o;
	else if(i=1)
		return 1;
	else return (fibonacci(i-1)+fibonacci(i-2));

}