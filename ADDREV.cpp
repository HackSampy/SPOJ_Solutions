#include <bits/stdc++.h>

using namespace std;

int reverse(int n){
    
    int reverso = 0, rem;

    while(n > 0){

        rem = n % 10;
        n = n / 10;
        reverso = reverso * 10 + rem;
    
    }
    return reverso;

}

int main()
{
    int t, no1, no2, ans1, ans2, add, final_add;

    scanf("%d",&t);
    
    while(t--){

        scanf("%d %d",&no1,&no2);
        ans1 = reverse(no1); ans2 = reverse(no2); add = ans1 + ans2;
        
        final_add = reverse(add);    
        
        printf("%d\n",final_add);
    
    }
    return 0;
}
