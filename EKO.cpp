#include "bits/stdc++.h"
#define endl '\n'

using namespace std;

int main(){

	long long int N, M, low = 0, high, mid, element, corte, max_tronco = 0, sol = 0;

	scanf("%lld %lld", &N, &M);

	int troncos[N];

	for (long long int i = 0; i < N; ++i){
		scanf("%lld", &element);	// fill del arreglo con los troncos.
		troncos[i] = element;

		if(element > max_tronco){
			max_tronco = element; // corte mas alto posible.
		}

	}

	high = max_tronco;

	while(low <= high){

		mid = (low + high) / 2;
		corte = 0;

		for (int i = 0; i < N; ++i ) {
            if (troncos[i] - mid > 0 ) {
                corte += troncos[i] - mid;
            }
        }
        if (corte > M ) {
            low = mid + 1;
            if (mid > sol) {
                sol = mid;
            }
        }
        else if (corte < M) {
            high = mid - 1;
        }
        else {
            sol = mid;
            break;
        }
    }

    printf( "%lld", sol);

	return 0;
}
