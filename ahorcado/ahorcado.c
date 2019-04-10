#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void dibujar(int fallos);
char palabra();
void comprueba(char letra);
int main(int argc, char const *argv[])
{   
    int intentos=0;
    char letra;
   
    //se pide una letra se recuperan todas y se comparan si no hay se suma sino se dibuja en los _ _ _
    printf("introduce una letra");
    scanf("%c",&letra);
    printf("\n%c\n",letra);
    /*char *palabra;
    palabra=palabra();*/
    char palabra[3]=['O','s','o'];
    comprueba(letra,palabra);
    
    return 0;
}
void comprueba(char letra, char palabra,char intentos){
    
}
char  palabra(){
    srand(time(NULL));
    int time=rand()%5;
    char palabra[1][4]={'o','s','o'};
    return *palabra;
}
void dibujar(int n){
    switch (n)

    {
        case 1:
            /*  ________
               /        |    
              /         O
              |
              |
              | 
            __|__
            */
                printf("    _____\n   /     |\n  /      O\n  |\n  |\n  |\n__|__");
                printf("numero de fallos %i",n);
     }
}
