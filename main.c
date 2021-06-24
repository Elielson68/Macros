#include <stdio.h>
#define Mult(x) x*x;
#define TheBigger(a,b,c) (a>b)&&(a>c)?printf("A é o maior: %d\n",a):(b>c)?printf("B é o maior: %d\n",b):printf("C é o maior: %d\n",c);
#define ChicoXavier(nota1, nota2) ((nota1+nota2)/2)>=7?"Aprovado":((nota1+nota2)/2)==6?"em Recuperação":"Reprovado"
int main(void) {
  //Primeira
  int result = Mult(8);
  printf("\n\n1. Questão: \nResultado da multiplicação: %d\n___________________\n\n", result);

  //Segunda
  printf("2. Questão:\n");
  TheBigger(2,3,4);
  TheBigger(5,3,4);
  TheBigger(5,7,4);
  printf("\n___________________\n\n");
  //Terceira
  printf("3. Questão:\n");
  printf("O aluno está %s\n", ChicoXavier(7, 7));
  printf("O aluno está %s\n", ChicoXavier(7, 6));
  printf("O aluno está %s\n", ChicoXavier(7, 4));
  return 0;
}