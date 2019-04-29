#include <stdio.h> 
void comp2(char *number){ 
	//para numeros negativos 
	int cont = 0; 
	int aux = 0 ; 
	while(number != "\n"){ 
		//inverte  os caracteres da string (binario)
		if (strcmp(number[cont]," 0") == 0 ){ 
			number[cont] = "1"; 
		} else if(strcmp(number[cont]," 1") == 0 ){ 
			number[cont] == "0";   
		} 
		cont++;  // quantos caracteres a string possui  
		if (number == "\n"){ 
 			break;
		}  
	}  
	aux = cont ;    
	if (strcmp(number[aux]," 0") == 0 ){ 
		number[aux] =  "1" ; } 
	else {    
		for(int j = o ; j < cont; j++){  
			if (strcmp(number[aux],"1")== 0 ){ 
				number[aux] = "0" ; 
				if ((number[aux - 1],"0")== 0 ){ 
					number[aux-1] = " 1 " ; 
				else{ 
					number[aux -1] =  "0";
				}
				}
			 } 
			 aux = aux - 2  ; // pula ( aux - 1)  para nao altera-lo  ,ou seja de dois em dois 

			}

		}
	

}