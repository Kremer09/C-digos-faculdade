#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
	char frase[80],inversa[80];
	int i,j;
	fflush(stdin);
	printf("Frase: ");
	gets(frase);
	for(i=0; i<strlen(frase); i++){
        if(frase[i]==' '){
        	for(j=i; j < strlen(frase); j++)
                frase[j] = frase[j+1];
			}
		}
	for(i=0;i<strlen(frase);i++)
	frase[i]=toupper(frase[i]);
	for(i=0;i<strlen(frase);i++)
	inversa[i]=frase[(strlen(frase)-1-i)];
	inversa[i]='\0';
	if(strcmp(frase,inversa)==0)
	printf("Sao polidromos\n");
	else
	printf("Nao sao polidromos\n");
	puts(frase);
	puts(inversa);
}
