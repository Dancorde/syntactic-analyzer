#ifndef FILE_H
#define FILE_H

#include <stdio.h>

#define tam_word 11
#define tam_hash 137

// Retorna o valor hash da palavra buscada
int hash(char *word);

// Insere a palavra na sua posicao da tabela hash
void insere(char a[][tam_word], char *word);

// Busca a posicao da palavra na tabela, retorna -1 caso nao exista
int busca_hash(char a[][tam_word], char *word);

// Imprime o conteudo da tabela hash na stdout
void imprime_hash(char a[][tam_word]);

#endif
