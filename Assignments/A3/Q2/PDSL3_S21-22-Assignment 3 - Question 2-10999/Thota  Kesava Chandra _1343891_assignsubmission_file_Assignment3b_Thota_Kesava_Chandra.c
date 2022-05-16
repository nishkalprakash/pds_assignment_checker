/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdio.h>

//string length calculator 
int slen(char a[])
{
    
    int count =0;
    for (int i=0;a[i]!='\0';i++)
    {
        count ++;
    }
    return count;
}


int main()
{
    char a[51],b[51],temp[51],final[51]; 
    int a_len,b_len,flag,min;
    printf("Enter sequence A : ");
    scanf("%s",a);
    printf("Enter sequence B : ");
    scanf("%s",b);
    a_len = slen(a);
    b_len = slen(b);
    
    
    if (a_len<b_len)
    {
        if (b_len-a_len>2)
        {
            printf("Too many gaps\n");
            return 0;
        }
        min = 2*b_len;
        if (b_len-a_len==1)
        {
            for (int i=0;i<b_len;i++)
            {
                flag=0;
                for (int j=0;j<a_len;j++)
                {
                    temp[j]=a[j];
                }
                for (int j=a_len;j>i;j--)
                {
                    temp[j]=temp[j-1];
                }
                temp[i]='-';
            
                for (int j=0;j<b_len;j++)
                {
                    if (temp[j]!=b[j])
                    {
                        flag++;
                    }
                }
                flag +=1;
                if (flag<min)
                {
                    min=flag;
                    for (int j=0;j<b_len;j++)
                    {
                        final[j]=temp[j];
                    }
                    final[b_len]='\0';
                }
            }
            printf("Sequence 1 : %s\n",final);
            printf("Sequence 2 : %s\n",b);
            printf("Similarity score : %d\n",min);
            return 0;
        }
        
        else
        {
            for (int i=0;i<b_len;i++)
            {
            for (int k=i+1;k<b_len;k++)
            {
                flag=0;
                for (int j=0;j<a_len;j++)
                {
                    temp[j]=a[j];
                }
                for (int j=a_len;j>k;j--)
                {
                    temp[j]=temp[j-1];
                }
                temp[k]='-';
                
                for (int j=a_len+1;j>i;j--)
                {
                    temp[j]=temp[j-1];
                }
                temp[i]='-';
            
                for (int j=0;j<b_len;j++)
                {
                    if (temp[j]!=b[j])
                    {
                        flag++;
                    }
                }
                flag += 2;
                if (flag<min)
                {
                    min=flag;
                    for (int j=0;j<b_len;j++)
                    {
                        final[j]=temp[j];
                    }
                    final[b_len]='\0';
                }
            }
            }
            printf("Sequence 1 : %s\n",final);
            printf("Sequence 2 : %s\n",b);
            printf("Similarity score : %d\n",min);
            return 0;
        }
    }
    
    

    if (b_len<a_len)
    {
        if (a_len-b_len>2)
        {
            printf("Too many gaps\n");
            return 0;
        }
        min = 2*a_len;
        if (a_len-b_len==1)
        {
            for (int i=0;i<a_len;i++)
            {
                flag=0;
                for (int j=0;j<b_len;j++)
                {
                    temp[j]=b[j];
                }
                for (int j=b_len;j>i;j--)
                {
                    temp[j]=temp[j-1];
                }
                temp[i]='-';
            
                for (int j=0;j<a_len;j++)
                {
                    if (temp[j]!=a[j])
                    {
                        flag++;
                    }
                }
                flag += 1;
                if (flag<min)
                {
                    min=flag;
                    for (int j=0;j<a_len;j++)
                    {
                        final[j]=temp[j];
                    }
                    final[a_len]='\0';
                }
            }
            printf("Sequence 1 : %s\n",a);
            printf("Sequence 2 : %s\n",final);
            printf("Similarity score : %d\n",min);
            return 0;
        }
        
        else
        {
            for (int i=0;i<a_len;i++)
            {
            for (int k=i+1;k<a_len;k++)
            {
                flag=0;
                for (int j=0;j<b_len;j++)
                {
                    temp[j]=b[j];
                }
                for (int j=b_len;j>k;j--)
                {
                    temp[j]=temp[j-1];
                }
                temp[k]='-';
                
                for (int j=b_len+1;j>i;j--)
                {
                    temp[j]=temp[j-1];
                }
                temp[i]='-';
            
                for (int j=0;j<a_len;j++)
                {
                    if (temp[j]!=a[j])
                    {
                        flag++;
                    }
                }
                flag +=2;
                if (flag<min)
                {
                    min=flag;
                    for (int j=0;j<a_len;j++)
                    {
                        final[j]=temp[j];
                    }
                    final[a_len]='\0';
                }
            }
            }
            printf("Sequence 1 : %s\n",a);
            printf("Sequence 2 : %s\n",final);
            printf("Similarity score : %d\n",min);
            return 0;
        }
    }
    
    flag=0;
    for (int i=0;i<a_len;i++)
    {
        if (a[i]!=b[i])
        {
            flag++;
        }
    }
    printf("Sequence 1 : %s\n",a);
    printf("Sequence 2 : %s\n",b);
    printf("Similarity score : %d\n",min);
    return 0;
}


