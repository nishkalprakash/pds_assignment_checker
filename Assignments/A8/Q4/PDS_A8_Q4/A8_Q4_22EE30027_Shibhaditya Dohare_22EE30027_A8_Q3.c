/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 8
Discription : To find number of repeated strings
*/
#include<stdio.h>
int main(){
	int i,j,k,m,s=0,ls1,ls2;
	char s1[30],s2[30];
	scanf("%s",s1);
	scanf("%s",s2);
	i=0;
	while(s1[i]!='\0'){
		i++;
	}
	ls1=i;
	i=0;
	while(s2[i]!='\0'){
		i++;
	}
	ls2=i;
	for(i=1;i<=ls2;i++){
		for(j=0;j<=i;j++){
				int lss=(i-j),z=0;
				if(ls1==lss){
					char ss[lss];
					for(k=j,z=0;z<lss;z++,k++){
						ss[z]=s2[k];
					}	
				int o=0;
				for(m=0;m<ls1;m++){
					if(ss[m]==s1[m]) o++;	
				}
				if(o==ls1) s++;
				}
		}
	}
	printf("%d",s);
	return 0;
}
