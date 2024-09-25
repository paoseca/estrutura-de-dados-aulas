#include <stdio.h>
#include <string.h>

int main () {
    char palavra[100], senha[10];

	    printf("Digite uma palavra: ");
	    scanf("%[^\n]", palavra); //Expressão Regular (menos n)
	    printf("voce digitou %s\n", palavra);
	    printf("\ndigite uma senha, so digitos (no max 10): ");

   //scanf(" %10[0..9]", senha);
   // printf("\nsua senha eh: %\n", senha);

   char c = getchar(); //capturando enter anterior (esvaziando buffer)
   int i=0;
		//leitura segura
    while (i<10 && ((c=getchar()) != '\n')) {
        senha[i] = c;
        i++;
    }
    senha[i] = '\0';
    printf("\nsua senha eh: %s\n", senha);
    
    //verificação se a palavra é palindrome
    i=0;
    int j = strlen(palavra) - 1; //tamanho da palavra menos um
    int e_palindrome = 1;

        while (i<=j && e_palindrome) { 
            if (palavra[i++] != palavra[j--]) {
                e_palindrome = 0;
                //i++;
                //j--;
            }
        }
            if(e_palindrome) {
                printf("\n%s eh palindrome\n", palavra);
            }
            else {
                printf("\n%s nao eh palindrome", palavra);
            }
 return 0;
}