#include "hash.h"
#include <string.h>

void insere(char a[][tam_word], char *word){
  strcpy(a[hash(word)], word);
}

int busca_hash(char a[][tam_word], char *word){
  int k;
  k = hash(word);
  if (!strcmp(a[k], word))
    return k;
  return -1;
}

int hash(char *word){
  int sum = 0;
  for (int i = 0; i < strlen(word); i++){
    sum += word[i] * 251 + word[i];
  }

  return (sum % tam_hash); //137 ok
}

void imprime_hash(char a[][tam_word]){
  for (int i = 0; i < tam_hash; i++){
    if(strcmp(a[i], "")){
      printf("%d - %s\n", i, a[i]);
    }
  }
}