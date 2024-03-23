#include <stdio.h>

int main(void)
{
  float n1, n2, media, nf;
  printf("Nota primeira prova: ");
  scanf("%f", &n1);
  
  printf("Nota segunda prova: ");
  scanf("%f", &n2);

  media=(n1+n2) / 2;
  

  if(media>=7) {
    printf("APROVADO com média %.0f", media);}
  
   else {
     if(media<5){
     printf("Reprovado %.0f", media);}
   
     else{      
     printf("EXAME");
     printf("\nNota exame: ");
     scanf("%f", &nf);

        if(n1>n2){
        nf= (n1+nf) / 2;
        printf("Maior nota: %.0f", n1);
        printf("\nMedia final: %.0f", nf);
        }
        else{
        nf= (n2+nf) / 2;
        printf("Maior nota: %.0f", n2);
        printf("\nMedia final: %.0f", nf);
        }
  
          if(nf<=5){
           printf(" REPROVADO");}
           else{
           printf(" APROVADO");}
     }
  }
} 