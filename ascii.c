//cadena de caracteres
#include<stdio.h> //biblioteca
int main(int argc,char*argv[]){
	 printf("Robledo Fuentes Ximena\n\n\t\t \tSegundo examen\n");
	 printf("Este pograma imprime el codigo ASCII\n");
	 for(int i='a'; i<=255 ;i++){ //for que ya se sabe cuantas veces si quiere repetir el proceso 255 en  mi caso
	 	printf("%c %3i \n",i,i); //se imprime con %c por ser un caracter
	 }
	
return 0;	
}
