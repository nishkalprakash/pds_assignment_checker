/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/


#include<stdio.h>
void main(){
    char s1[100],s2[100],main[100];
    int len1,len2,count,i,index1,index2,j,k,t,a=0,count_m;
        count=0;
        printf("Enter Sequence 1:");
        scanf("[\n,\t,' ']%s",s1);
        printf("\n");
        fflush(stdin);
        printf("Enter Sequence 2:");
        scanf("[\n,\t,' ']%s",s2);
        printf("\n");
        for(len1=0;s1[len1]!='\0';len1++);
        for(len2=0;s2[len2]!='\0';len2++);
        if (len1==len2){
            printf("Sequence 1: %s",s1);
            printf("\nSequence 2: %s",s2);
            printf("\nPenalty : ");
        for(i=0;i<len1;i++){
            if(s1[i]==s2[i])  printf("0");
            else{printf("1");count++;}
            }
            count_m=count;
            printf("\nSimilarity: %d",count_m);
        }
        else if (len1!=len2){
            if (len1>len2){
                if((len1-len2)==2)a=1;
                else a=0;
                for(i=0;i<(len1-a);i++){
                    count=0;
                    for(j=i;j<(len1-i-a);j++){
                        s2[j+1]=s2[j];
                    }
                    s2[j]='-';
                    if((len1-len2)==2){
                    for(k=i+1;k<len1;k++){
                     for(j=i;j<(len1-i);j++){
                            s2[j+1]=s2[j];
                        }
                     s2[j]='-';
                     for(j=0;j<len1;j++){
                        if(s1[j]==s2[j]) ;
                        else if(s2[j]=='-'){count=count+2;}
                        else {count++;}
                        }
                        }
                    if(i==0){
                            count_m=count;
                            for(t=0;t<len1;t++)
                            {
                            main[t]=s2[t];
                            }}
                    if(count_m<count){
                        count_m=count;
                        for(t=0;t<len1;t++){
                            main[t]=s2[t];
                            }}

                    }}
            printf("Sequence 1: %s",s1);
            printf("\nSequence 2: %s",main);
            printf("\nPenalty : ");
            for(j=0;j<len1;j++){
                        if(s1[j]==main[j]) printf("0");
                        else if(main[j]=='-'){printf("2");}
                        else {printf("1");}
                        }
            printf("\nSimilarity: %d",count_m);
                }
            if (len2>len1){
                if((len2-len1)==2)a=1;
                else a=0;
                for(i=0;i<(len2-a);i++){
                    count=0;
                    for(j=i;j<(len2-i-a);j++){
                        s1[j+1]=s1[j];
                    }
                    s1[j]='-';
                    if((len2-len1)==2){
                    for(k=i+1;k<len2;k++){
                     for(j=i;j<(len2-i);j++){
                            s1[j+1]=s1[j];
                        }
                     s1[j]='-';
                     for(j=0;j<len2;j++){
                        if(s1[j]==s2[j])0;
                        else if(s2[j]=='-')
                            {count=count+2;}
                        else {count++;}
                        }
                        }
                    if(i==0) {
                            count_m=count;
                            for(t=0;t<len2;t++){
                            main[t]=s1[t];
                            }}
                    if(count_m<count){
                        count_m=count;
                        for(t=0;t<len2;t++){
                            main[t]=s1[t];
                            }}

                    }
                         }
            printf("Sequence 1: %s",main);
            printf("\nSequence 2: %s",s2);
            printf("\nPenalty : ");
            for(j=0;j<len1;j++){
                        if(s2[j]==main[j]) printf("0");
                        else if(main[j]=='-'){printf("2");}
                        else {printf("1");}
                        }
            printf("\nSimilarity: %d",count_m);}
            }
    }
