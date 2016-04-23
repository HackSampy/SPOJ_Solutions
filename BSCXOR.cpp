#include <bits/stdc++.h>

using namespace std;

int main(){

	bool a, b, c;
	int ai, bi, ci;

	scanf("%d", &ai);
	scanf("%d", &bi);

	a = ai; b = bi;
	c = a ^ b;
	ci = c;

	printf("%d\n", c);

	return 0;
}
