/*
    Solution for ACODE problem.
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int longitud;
	char cadena[5001], aux, aux2;
	long long posibles[5001];
	
	while(true){

		cin >> cadena;

		if(cadena[0]=='0'){
			break; 
		}
		
		longitud = strlen(cadena);
		
		posibles[0] = 1;
		posibles[1] = 1;
		
		for(int i = 2; i<=longitud; i++){
			
			posibles[i] = 0;
			aux = cadena[i-2]-'0'; 
			aux2 = cadena[i-1]-'0';
			
			if(aux == 1 || (aux ==2 && aux2<=6)){
				posibles[i] = posibles[i] + posibles[i-2];
			}
			if(aux2 != 0){
				posibles[i] = posibles[i] + posibles [i-1];
			}
		}
		
		cout << posibles[longitud]<<"\n";
	}
	
	return 0;
}
