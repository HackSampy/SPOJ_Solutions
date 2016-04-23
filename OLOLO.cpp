#include <bits/stdc++.h>

using namespace std;

int main(){

	int elements, actual, res = 0;

	scanf("%d", &elements);

	while(elements--){

		scanf("%d", &actual);
		res = res ^ actual;

	}

	printf("%d\n", res);

	return 0;
}
