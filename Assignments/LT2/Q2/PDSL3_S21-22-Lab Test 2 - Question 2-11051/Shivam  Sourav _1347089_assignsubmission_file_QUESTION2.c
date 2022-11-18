//name:SHIVAM SOURAV
//21CS10059
//SECTION 3

#include <stdio.h>
int maxAlphaValue(int s[],int n)
{
    int alpha[n],count,k,i,temp,max;
    for(i=0;i<n;i++)
    {
        count=0;
        for(k=0;k<i;k++)
        {
            if((s[i]%s[k])==0)
            count++;
        }
        alpha[i]=count;
    }
    max=alpha[1];
    for (i = 0; i < n ; i++)
    {
        if(alpha[i]>max)
        {
            max=alpha[i];
        }
        
    }
    return(max);
        
}

int main()
{
    int i,n,max;
   printf("enter the length of the sequence");
   int s[n];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&s[i]);
   }
   printf("\n %d",maxAlphaValue(s,n)+1);
   
    
    

    return 0;
}
