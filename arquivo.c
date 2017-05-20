#include <stdio.h>
#include <string.h>

struct cliente 
{
char var_sexo, nomecli[50];
int vl_idade;    
float vl_limite_credito;
int cd_cli;
}
int const tam=100;
int main()
{
 struct cliente base[tam];
 FILE *arq_cliente;
 char var_arquivo_aux;
 int indice = 0;
 arq_cliente = fopen("CLIENTE.TXT", "r");
 int i;

  if (arq_cliente == NULL)
 {
 printf("\nArquivo CLIENTE.TXT nao pode ser aberto.");
 printf("\nOcorreu um Erro Grave ! Use alguma tecla para finalizar !");
 getch();
 }
 else
 {
 
 var_arquivo_aux = fscanf(arq_cliente,"%d %c %s %d %f",&base[i].cd_cli,&base[i].var_sexo,&base[i].nomecli, &base[i].vl_idade, &base[i].vl_limite_credito);
 
 while (var_arquivo_aux != EOF)
 {
 indice = indice + 1;
 printf("\n Dados do %d § cliente : \n ", indice);
 printf("\n Codigo do Cliente...: %d Sexo..: %c", cd_cli, var_sexo);
 printf("\n Nome do Cliente.................: %s ", nomecli);
 printf("\n Idade..........: %d Credito....: %8.2f", vl_idade, vl_limite_credito);
 printf("\n-------------------------------------------------------------- [Tecle algo] !");
 getch();
 var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f",&cd_cli, &var_sexo
,&nomecli, &vl_idade, &vl_limite_credito);
 
 }
 fclose (arq_cliente);
 printf("\n *** FIM : [Tecle algo] !");
 getch();
 }
}
    
    
    
    
    
    
    
    
    
    
    
    
    


