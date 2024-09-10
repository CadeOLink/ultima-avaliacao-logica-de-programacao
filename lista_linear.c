#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int List[TAM], true=1, opcion, i, indicie;

void addValueToList(int List[]){
   printf("Digite o valor do indicie: ");
   scanf("%d", &indicie);
   indicie -= 1;
   system("cls");

      if(indicie >= 0 && indicie < 5){
         if(List[indicie] != 0){
            printf("Já possue um valor nesse indicie");
         } else if(List[indicie] == 0){
            printf("List[%d] = ", indicie+1);
            scanf("%d", &List[indicie]);
         }
      } else {
         printf("Digite um valor ente 1 e 5");
      }
      
}

void showList(int List[]){
   printf("| Listando |\n");
      for(i = 0; i < TAM; i++){
         printf("%d ", List[i]);
      }
}

void deleteValueToList(int List[]){
   printf("Digite o valor do indicie: ");
   scanf("%d", &indicie);
   indicie -= 1;
   system("cls");

      if(indicie >= 0 && indicie < 5){
         if(List[indicie] != 0){
            List[indicie] = 0;
            printf("Valor removido!!!");
         } else if(List[indicie] == 0){
            printf("Posicao ja zerada!!!");
         }
      } else {
         printf("Digite um valor ente 1 e 5");
      }
}

int main(){
   /* Incia os valores de cada posição com 0 */
   for(i = 0; i < TAM; i++){
      List[i] = 0;
   }

   while(true){
      printf("\n|Opcoes|\n1 - Add valor\n2 - Listar\n3 - Deletar\n0 - Sair\n");
      scanf("%d", &opcion);

         switch(opcion){
            case 0:
               system("cls");
               true = 0;
               break;
            
            case 1:
               system("cls");            
               addValueToList(List);
               printf("Valor inserido!!!");
               break;

            case 2:
               system("cls");
               showList(List);
               break;
            
            case 3:
               system("cls");
               deleteValueToList(List);
               break;

            default:
               system("cls");
               printf("Digite um valor valido!!!\n");
               break;
      }
   }

}