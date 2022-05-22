/* 
Autor: Franciscomilan
Realizado: 31/03/22
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 5 del parcial 2 en C que pide un caracter y valida 
si es una letra, un numero o caracter, usando los codigos ASCII para la
materia programacion estructurada
*/

//Libreria
#include<stdio.h>
//Principal
int main () {
	//Variables
	unsigned char dato;
	//Entrada de datos
	printf(" Introduce un caracter ");
	scanf("%c",&dato);
	//Salida
	printf(" Se introdujo el caracter <%c> y su codigo ASCII es %d\n", dato, dato);
	//Retorno
	return 0;
}
