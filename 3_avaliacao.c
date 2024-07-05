/* 
Faça em C uma agenda telefônica que use o conceito de estruturas de dados heterogêneas (nome, telefone, email) e homogêneas (50 contatos). A agenda deve oferecer um menu com duas opções:
1. Cadastrar novo contato
2. Listar todos os contatos
*/

#include <stdio.h>
#define LIMITE 49

struct pessoa{
   char nome[127];
   char telefone[LIMITE];
   char email[LIMITE];
};

struct pessoa ArmazemDeContatos[LIMITE];
int escolha,contador = 0;

void Menu(){
   printf("======== Menu ========\n");
   printf("[1] Cadastrar\n");
   printf("[2] Listar todos os contatos\n");
   printf("[0] Sair\n");
   scanf("%d", &escolha);
}

void CadastrarNovosContatos(contador){
   printf("=============== Cadastro ===============\n");

   printf("Digite o nome da pessoa: ");
   scanf("%s", &ArmazemDeContatos[contador].nome);
   
   printf("Digite o telefone da pessoa: ");
   scanf("%s", &ArmazemDeContatos[contador].telefone);

   printf("Digite o e-mail da pessoa: ");
   scanf("%s", &ArmazemDeContatos[contador].email);
}

void ListarTodosOsContatos(contador){
   if(contador > 0){
   for(int x = 0; x < contador; x++){
      printf("======== Conta %d ========\n", x);
      printf("[%d] Nome: %s\n", x, ArmazemDeContatos[x].nome);
      printf("[%d] Telefone: %s\n", x, ArmazemDeContatos[x].telefone);
      printf("[%d] Email: %s\n", x, ArmazemDeContatos[x].email);
      printf("=========================\n");
   }
}else{printf("Nao ha registros");}
}

int main (){

do{

Menu();

switch(escolha){
   case 0:
   printf("Fim do programa");
   break;

   case 2:
   system("cls");
   ListarTodosOsContatos(contador);
   break;

   case 1:
   system("cls");
   CadastrarNovosContatos(contador);
   contador++;
   system("cls");
   break;
}
}while(escolha != 0);

}