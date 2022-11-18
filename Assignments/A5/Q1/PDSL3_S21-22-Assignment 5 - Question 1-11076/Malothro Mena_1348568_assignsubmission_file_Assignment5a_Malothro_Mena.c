# include<stdio.h>
void sort(int*a, int*b, int*c)//function to find and print the order and the address of the integrs
{
int temp;//logic starts from here
if(*a<=*b && *a<=*c){
        if (*b>*c){
            temp= *b;
            *b=*c;
            *c= temp;
}

}
else if (*b<=*a && *b<=*c){
        temp=*b;
        *b=*a;
        *a = temp;
        if (*b>*c){
                temp=*b;
                *b=*c;
                *c= temp;
                }
                }
                else{temp=*c;
                *c=*a;
                *a= temp;
                if (*b>*c)
                    {
                        temp =*b;
                        *b= *c;
                        *c = temp;}//printing the address and the newly ordered integer
                        } printf("address of a=%d\n",a);
                          printf("address of b=%d\n",b);
                          printf("address of c=%d\n",c);
                          printf("the numbers in non decreasing order:%d %d %d",*a,*b,*c);


}
int main(){
int a,b,c;
printf("enter no.s\n");
scanf("%d%d%d",&a, &b, &c);//taking inputs for a b and c
sort(&a,&b,&c);//calling the function

return 0;
}
