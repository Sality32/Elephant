#include<stdio.h>
int main(){
	int x,ans=0;
	scanf("%d",&x);
	
	while(x>0){
	
		if(x>=5){
			x-=5;
			ans++;
		}else if(x>=4){
			x-=4;
			ans++;
		}else if(x>=3){
			x-=3;
			ans++;
		}else if(x>=2){
			x-=2;
			ans++;
		}else{
			x--;
			ans++;
		}
	}
	printf("%d",ans);
}
