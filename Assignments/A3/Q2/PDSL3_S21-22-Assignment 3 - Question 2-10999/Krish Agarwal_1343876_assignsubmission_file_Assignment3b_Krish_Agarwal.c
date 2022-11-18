/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-code blocks
*/
#include<stdio.h>

int length(char str[])
{
    int len=0;

    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    return len;
}

int penalty(char str1[],char str2[],int pnl[])
{
    int sum=0;
    for(int i=0;i<length(str1);i++)
    {
        if(str1[i]!=str2[i])
        {
            if(str2[i]!='-')
            {
                pnl[i]=1;
            }
            else
            {
                pnl[i]=2;
            }
        }
        else
        {
            pnl[i]=0;
        }
        sum+=pnl[i];
    }
    return sum;
}

void gap(int ind,char str2[])
{
    char str3[100];
    for(int i=0;i<length(str2);i++)
    {
        str3[i]=str2[i];
        str3[i+1]='\0';
    }
    str2[ind]='-';
    for(int i=ind+1;i<length(str2)+1;i++)
    {
        str2[i]=str3[i-1];
        str2[i+1]='\0';
    }
    return;
}

int main()
{
    char sq1[100],sq2[100];
    //Taking Input
    printf("Enter Sequence 1 : ");
    scanf("%s",&sq1);
    printf("Enter Sequence 2 : ");
    scanf("%s",&sq2);
    //inserting /0 to know termination of string
    char temp[100];
    for(int i=0;i<length(sq2);i++)
    {
        temp[i]=sq2[i];
        temp[i+1]='\0';
    }
    //Calculating Scores
    if(length(sq2)>length(sq1))
    {
        for(int i=0;i<length(sq1);i++)
        {
            sq2[i]=sq1[i];
            sq2[i+1]='\0';
        }
        for(int i=0;i<length(temp);i++)
        {
            sq1[i]=temp[i];
            sq1[i+1]='\0';
        }
        for(int i=0;i<length(sq2);i++)
        {
            temp[i]=sq2[i];
            temp[i+1]='\0';
        }
    }
    if(length(sq1)==length(sq2))
    {
        int pnl[length(sq1)];
        int similar=penalty(sq1,sq2,pnl);

        printf("Penalty:\t");
        for(int i=0;i<length(sq1);i++)
        {
            printf("%d ",pnl[i]);
        }
        printf("\nSimilarity Score = %d\n",similar);
    }
    else if(length(sq1)-length(sq2)==1)
    {
        int pnl[length(sq1)],similar=length(sq1)+1,ind=0;
        for(int i=0;i<length(temp);i++)
        {
            gap(i,sq2);
            if(similar>penalty(sq1,sq2,pnl))
            {
                similar=penalty(sq1,sq2,pnl);
                ind=i;
            }
            for(int j=0;j<length(temp);j++)
            {
                sq2[j]=temp[j];
                sq2[j+1]='\0';
            }
        }
        //Displaying
        printf("\nSequence after inserting gaps finally:-\n");
        gap(ind,sq2);
        printf("Sequence 1: %s\nSequence 2: %s\n",sq1,sq2);
        similar=penalty(sq1,sq2,pnl);
        printf("Penalty:\t");
        for(int i=0;i<length(sq1);i++)
        {
            printf("%d ",pnl[i]);
        }
        printf("\nSimilarity Score = %d\n",similar);
    }
    else if(length(sq1)-length(sq2)==2)
    {
        int pnl[length(sq1)],similar=length(sq1)+2,ind1=0,ind2=0;
        for(int i=0;i<length(temp);i++)
        {
            gap(i,sq2);
            for(int j=i+1;j<length(temp)+1;j++)
            {
                gap(j,sq2);
                if(similar>penalty(sq1,sq2,pnl))
                {
                    similar=penalty(sq1,sq2,pnl);
                    ind1=i;
                    ind2=j;
                }
                for(int k=0;k<length(temp);k++)
                {
                    sq2[k]=temp[k];
                    sq2[k+1]='\0';
                }
                gap(i,sq2);
            }
            for(int l=0;l<length(temp);l++)
            {
                sq2[l]=temp[l];
                sq2[l+1]='\0';
            }
        }
        gap(ind1,sq2);
        gap(ind2,sq2);
        //Displaying for case2
        printf("\nSequence after inserting gaps finally:-\n");
        printf("Sequence 1: %s\nSequence 2: %s\n",sq1,sq2);
        similar=penalty(sq1,sq2,pnl);

        printf("Penalty:\t");
        for(int i=0;i<length(sq1);i++)
        {
            printf("%d ",pnl[i]);
        }
        printf("\nSimilarity Score = %d\n",similar);
    }
    else
    {
        printf("Difference between sequences is greater than 2");
    }
    return 0;
}