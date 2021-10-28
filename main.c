#include<stdio.h>

int main(){
	int a,b,j,p=1;
	int a,a2,b;
	int i;
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
	if(c=='^'){
	a2=a;
	for(i=1;i<=b;i++){
		a2 *= a;
		}
		printf("%d\n",a);
	}
	return 0;

}