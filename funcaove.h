int  listanum[10];



int n;
void vetor(){
 for(n=0;n<10; n++){
  printf("Digite um Numero para o vetor %d:", n);
  scanf("%d", &listanum[n]);
 
 }
}

void lista_multiplicada(){

	for(n=0;n<10;n++){
	listanum[n]=(listanum[n]*2);
	printf("\n\nValores multiplicados vetor %d:%d\n", n, listanum[n]);
	}
}


