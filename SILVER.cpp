#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	scanf("%d",&n);

	while(n){
		printf("%d\n",(int)(log(n)/log(2)));
		scanf("%d",&n);
	}

	return 0;
}
