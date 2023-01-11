/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 8
Discription : To find sub strings which are palindrome
*/
#include<stdio.h>
int main(){
	int i,j,k,ls,lss;
	char s[30];
	scanf("%s",s);
	i=0;
	while(s[i]!='\0'){
		i++;
	}
	ls=i;
	for(i=0;i<ls;i++){
		for(j=0;j<=i;j++){
			int z=0;
			lss=(i-j+1);
			if(lss>1){
			char ss[lss];
			for(k=j,z=0;k<=i && z<lss;k++,z++){
				ss[z]=s[k];
			}
			//printf("%s\n",ss);
			int m=0,o=0;
			for(m=0;m<lss;m++){
				if(ss[m]==ss[lss-m-1]) o++;
				if(o==lss) printf("%s ", ss);
			}
			}
		}
	}
	return 0;
}
