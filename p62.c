#include<stdio.h>
int n, cnt,i,num,maxcnt=0,ansn;
int main(){
	scanf("%d", &num);
	while(n<=num){
		i=1;
	cnt=0;
	while(i<=n)
	{
	if(n%i==0){
//		printf("%d ",i);
		cnt++;
	}
		i++;	
	}
	printf("\n%d\n",cnt);
	if(maxcnt<cnt){
		maxcnt=cnt;
		ansn=n;
	}
	n++;
	}
	i=1;
	cnt=0;
	while(i<=n)
	{
	if(n%i==0){
		printf("%d ",i);
		cnt++;
	}
		i++;	
	}
	printf("\n%d\n",cnt);
	return 0;
}
