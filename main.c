#include<stdio.h>

int main(){
	int a,b,j,p=1;
	char c;

	scanf("%d %c %d",&a,&c,&b);


	if(c=='+'){
		printf("%d\n",a+b);
	}
	if(c=='-'){
		printf("%d\n",a-b);
	}
	if(c=='*'){
		printf("%d\n",a*b);
	}

	if(c=='/'){
		printf("%d\n",a/b);
	}
	
	if(c=='P'){
		for(j=a; j>=b; j--){
			p *= j;
		}
		printf("%d\n", p);
	}
	
	return 0;

}