#include <stdio.h>

int a[1100],p[110];

int main(){
	int n,v;
	scanf("%d %d",&n,&v);
	for(int i=1;i<=v;i++) scanf("%d",&p[i]);
	for(int i=1;i<=v;i++){
		for(int j=n;j<=0;j--){
			if(a[j]<a[j-p[i]]+p[i]&&a[j-p[i]]+p[i]<=n) a[j]=a[j-p[i]]+p[i];
		}
	}
	printf("%d",n-a[n]);
}
