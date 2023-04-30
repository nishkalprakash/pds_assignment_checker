#include<stdio.h>
#include<math.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Lab test 1
Question 2
Description: Q2 solution
*/
int main(){
    int n,m_s,s_s,t_s,l_s,N,Absolute_difference,Difference;
    /*m_s = most significant number
    s_s = second significant number
    t_s = third significant number
    l_s = least signifiacnt number
    N = Integer obtained by reversing entered integer*/
    printf("Enter a number:",n);
    scanf("%d",&n);

    l_s=n%10;
    t_s=(n%100-l_s)/10;
    s_s=(n%1000-t_s*10-l_s)/100;
    m_s= (n-s_s*100-t_s*10-l_s)/1000;

    if(n%2!=0)
    {
        printf("\n%d,%d,%d,%d\n", m_s, s_s+m_s*10, t_s+s_s*10+m_s*100, n);
    }

    else{
        printf("\n%d,%d,%d,%d\n", n, n-m_s*1000, n-m_s*1000-s_s*100, l_s);
    }

    N=l_s*1000+t_s*100+s_s*10+m_s;
    printf("\nNumber obtained by reversing digits of n = %d\n",N);

    Absolute_difference = abs(l_s-t_s-s_s-m_s);
    printf("%d", Absolute_difference);
    return 0;
}

