#include <stdio.h>
#include <stdlib.h>

/*
Name : Vankudoth Pavan
Department : Chemical Engineering
Roll No : 21CH10075
Package : Code blocks
Operating system : Windows
*/

int main()
{
    int *list,count=2,number,i,flag;
    list=(int *)malloc(136);
    printf("Enter the numbers : ");
    scanf("%d %d",list,list+1);
    printf("Numbers : \n");
    while (count<34){
        flag=0;
        number=list[rand()%2+0];
        number+=10*list[rand()%2+0];
        number+=100*list[rand()%2+0];
        number+=1000*list[rand()%2+0];
        number+=10000*list[rand()%2+0];
        for (i=2;i<count;i++){if (number==list[i]) {flag=1;break;}}
        if (flag==0)
        {
            list[count++]=number;
            if (number%(list[0]+list[1])!=0) {printf("%d ",number);}
        }
    }
    free(list);
    return 0;
}
