#include <stdio.h>
#include <string.h>
#include "hash.h"

extern int yylex();
extern int yylineno;
extern char *yytext;

int main(void){
  int ntoken;
  char wordsHash[tam_hash][tam_word];
  char word[tam_word];

  int achou;

  FILE *fp;

  // Inicia a hash vazia
  for (int i = 0; i < tam_hash; i++){
    strcpy(wordsHash[i], "");
  }

  // Abre o arquivo contendo a lista de palavras reservadas
  fp = fopen ("reservedWords.txt", "r");
  if(!fp){
    // Caso nao encontre o arquivo, para a execucao
    fprintf(stderr, "erro - arquivo de palavras reservadas nao encontrado");
    return 1;
  }

  // Insere as palavras reservadas na tabela hash
  while (!feof(fp)){
    fscanf(fp, "%s\n", word);
    strcpy(wordsHash[hash(word)], word);
  }
  fclose(fp);

  // Comeca a analise do input
  ntoken = yylex();

  // Enquanto nao atingir EOF entra no loop
  while(ntoken){
    // Strings que podem corresponder a palavras reservadas causam interrupcao na leitura,
	// sao armazenadas na variavel word, e buscadas na tabela hash criada
    strcpy(word, yytext);
    achou = busca_hash(wordsHash ,word);
	// Caso nao esteja na tabela de palavras reservadas, deve ser um identificador
    if (achou != -1){
      printf("%s - %s\n", word, wordsHash[achou]);
    } else {
      printf("%s - id\n", word);
    }

	// Continua a leitura
    ntoken = yylex();
  }

  return 0;
}
