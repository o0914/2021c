#include <stdio.h>
int main()
{
	int n;
	float s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		s=s+x;
	}
	printf("%.2f",s/n);
}
