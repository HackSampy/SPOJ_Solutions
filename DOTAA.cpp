#include <bits/stdc++.h>

int main(){

    int T, n, i, m, d, heroes[500], cont = 0;
    
    scanf("%d",&T);
    
    while(T--){
        
        scanf("%d%d%d",&n,&m,&d);
        cont = 0;

        for(i=0;i<n;i++){

                scanf("%d",&heroes[i]);
                
                while((heroes[i]-=d) > 0) {
                    cont++;
                }
        }

        if(cont >= m){
            printf("YES\n");
        } 
        else{
          printf("NO\n");  
        }     
    }
    return 0;
}
