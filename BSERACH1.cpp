#include <bits/stdc++.h>

using namespace std;
	
long long int elements[500001];
long long int binarySearch(long long int low, long long int high, long long int x);

int main(){
	
	long long int n_elements, n_queries, element, resultado, querie;

	scanf("%lld %lld", &n_elements, &n_queries);

	for (int i = 0; i < n_elements; ++i){
		scanf("%lld", &element);
		elements[i] = element;
	}

	while(n_queries--){
		scanf("%lld", &querie);
		printf("%lld\n", binarySearch(0, n_elements - 1, querie));
	}

	return 0;
}

long long int binarySearch(long long int low, long long int high, long long int x){

	long long int mid;
	long long int ans=-1;
    
    while(low<=high){
        
        mid=(low+high)/2;

        if(elements[mid] == x){
            ans = mid;
            high = mid - 1;
        }
        else if(elements[mid] > x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return ans;
}
