int * ekleyici(int fdizi[], int fsayi);

main(){
}

int * ekleyici(int fdizi[], int fsayi){
	int i=4;
	
	while(fdizi[i] > fsayi){
		fdizi[i+1] = fdizi[i];
		i--;
	}
	
	fdizi[i+1] = fsayi;
	
	return fdizi;
}
