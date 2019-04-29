#include<stdio.h> 
// so o interior do main sera adicionado no codigo principal 
void main(){  
	int n; 
	int *aux[16], definitivo[16];  

	if(strcmp(opcode , "lw")== 0 ){ 
		//load word   
		strcpy(opcode_aux , "100011");  
		conversor(n,&aux); 
		for(int i = 0 ; i < 16 ; i++){
			definitvo[i] = aux[i] ;  
		}
		// a codificação do rs e rt são as mesmas 
		o_i = 3 ; // lw  
		//LOAD WORD, RS é o registrador destino e  
		//RT é o registrador fonte

	} 
	else if (strcmp(opcode,"sw")== 0 ){ 
		strcpy(opcode_aux,"101011"); 
		conversor(n,&aux); 
		for(int i = 0 ; i < 16 ; i++){
			definitvo[i] = aux[i] ;  
		}
		// a codificação do rs e rt são as mesmas 
		o_i = 4 ; // sw  
		//  STORE WORD, 
		//RS é o registrador fonte e RT é o registrador destino.

	}

} 
/* 
codigos a serem implementados na main  
if (o_i == 3) //lw
            {
            fprintf(saida,opcode_aux);
            fprintf(saida,rs_aux);
            fprintf(saida,rt_aux);
            for (i=11;i<16;i++)
                fprintf(saida,"%d",definitivo[i]);

if (o_i == 4)
            {
            fprintf(saida,opcode_aux);
            fprintf(saida,rs_aux);
            fprintf(saida,rt_aux);
            for (i=11;i<16;i++)
                fprintf(saida,"%d",definitivo[i]);
*/