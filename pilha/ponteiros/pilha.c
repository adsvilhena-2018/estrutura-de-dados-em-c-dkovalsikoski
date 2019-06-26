#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
  int valor;
  struct Node *prox;
  struct Node *anterior;
} no;

typedef struct pilha{
  no *inicio;
  no *fim;
  int tamanho;
} Pilha;

void pilha_vazia (Pilha *pilha){
  pilha->inicio = NULL;
  pilha->fim = NULL;
}

void empilha (Pilha * pilha, int valor){
  if (pilha->inicio == NULL)
    {
    pilha->inicio = malloc (sizeof (no));

    pilha->inicio->valor = valor;
    pilha->inicio->anterior = NULL;
    pilha->inicio->prox = NULL;
    pilha->fim = pilha->inicio;
    pilha->tamanho++;
}
  else{
    no *novo = malloc (sizeof (no));

    novo->valor = valor;
    novo->prox = NULL;
    novo->anterior = pilha->fim;
    pilha->fim->prox = novo;
    pilha->fim = novo;
    pilha->tamanho++;
    }
}

void desempilha (Pilha *pilha){
  if (pilha->inicio == NULL)
    printf ("Ta vazio parceiro!");
  else if (pilha->inicio == pilha->fim){
    free (pilha->inicio);
    pilha->inicio = NULL;
    pilha->fim = NULL;
    pilha->tamanho = 0;
}
  else{
    no *ant = pilha->fim->anterior;
    ant->prox = NULL;
    free (pilha->fim);
    pilha->fim = ant;
    pilha->tamanho--;
    printf("Foi pro saco.");
    }
}

void imprime_pilha (Pilha pilha){
  if (pilha.inicio == NULL)
    printf ("Agora nessa pilha tem o que o Bonoro fez no Brasil: Nada.");
  else{
    no *atual = pilha.inicio;
    while (atual != NULL){
	 printf ("|%d|", atual->valor);
	 atual = atual->prox;
}
    printf ("\n");
    }
}

int main (){
    printf("Cria a pilha e insere os valores:\n");
    Pilha pilha;
    pilha_vazia(&pilha);
    empilha(&pilha, 30);
    empilha(&pilha, 6);
    empilha(&pilha, 3);
    empilha(&pilha, 7);
    empilha(&pilha, 68);
    empilha(&pilha, 7);
    empilha(&pilha, 7);
    imprime_pilha (pilha);
    printf("Valores inseridos, agora vamos desempilhar\n");
    
    //desempilha
    desempilha(&pilha);
    imprime_pilha(pilha);
    desempilha(&pilha);
    imprime_pilha(pilha);
    desempilha(&pilha);
    imprime_pilha(pilha);
    desempilha(&pilha);
    imprime_pilha(pilha);
    desempilha(&pilha);
    imprime_pilha(pilha);
    desempilha(&pilha);
    imprime_pilha(pilha);
    desempilha(&pilha);
    imprime_pilha(pilha);
    return 0;
}
