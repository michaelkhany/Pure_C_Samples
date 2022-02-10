#include <stdio.h>

void siralayici(char fstr[]);


main(){
}

void siralayici(char fstr[]){
	int i=1;
	char a=fstr[0], c;
	
	while(fstr[i] != '\0'){
		if(fstr[i] > fstr[i-1]){
			c= fstr[i];
			fstr[i] = fstr[i-1];
			fstr[i-1] = c;
		}
		i++;
	}
	
	printf("Ifadenin sirali hali: %s",fstr);
}
