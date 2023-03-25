#include <stdio.h>
#include <math.h>
int main()
{
    int check, num, inv, u_check, t_check, h_check, d_num, d_check, m_num, m_check;
    scanf("%d", &check);
    scanf("%d", &num);
    if(num>999 || num<-999)
    {
        printf("Wrong Input");
    }
    if(check>999 || check<-999)
    {
        printf("Wrong Input");
    }
    m_num=num, m_check=check;
    if(check<0) m_check = -m_check;
    if(num<0) m_num = -m_num;
    d_num =(int) (log10(m_num)+1);
    d_check = (int) (log10(m_check)+1);
    if(d_num != d_check)
    {
        printf("Wrong Input");
    }
    else if(d_num==2)
    {
        u_check= check%10;
        t_check= (check/10)%10;
        inv= u_check*10 + t_check;
        if(inv==num) printf("Perfect Pair");
        else printf("Not a Perfect Pair");
    }
    else if(d_num==3)
    {
        u_check= check%10;
        t_check= (check/10)%10;
        h_check= check/100;
        inv = u_check*100+ t_check*10+ h_check;
        if(num==inv) printf("Perfect Pair");
        else printf("Not a Perfect Pair");
    }
    else if(d_num==1)
    {
        if(check==num) printf("Perfect Pair");
        else printf("Not a Perfect Pair");
    }
    return 0;
}
