#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct fila *prox;
}Node;

typedef struct fila {
    Node *inicio;
    Node *fim;
}Fila;

void fila_vazia(Fila *fil){
    fil->inicio=NULL;
    fil->fim=NULL;
}
void insere_fila_vazia(Fila *fil, int valor){
    fil->inicio=malloc(sizeof(Node));
    fil->inicio->prox=NULL;
    fil->inicio->valor=valor;
    fil->fim=fil->inicio;
}
void insere_fim(Fila *fil, int valor){
    if(fil->inicio == NULL){
        insere_fila_vazia(fil,valor);
    } else {
        Node *novoNo = malloc(sizeof(Node));
        novoNo->prox=NULL;
        novoNo->valor = valor;
        Node *tmp =fil->inicio;
        while (tmp->prox!=NULL){
            tmp = tmp->prox;
        }
        tmp->prox = novoNo;
        fil->fim->prox=novoNo;
        fil->fim=novoNo;

    }
}
void retira(Fila *fil){
    Node *tmp = fil->inicio;
    for (int i =0; i<1 ; i++) {
        tmp=tmp->prox;
    }
    fil->inicio=tmp;
    fil->inicio->prox=tmp->prox;
}
void imprime(Fila fil) {
    Node *tmp = fil.inicio;
    while (tmp != NULL) {
        printf("%d\n", tmp->valor);
        tmp = tmp->prox;
    }
}

int main() {
    Fila fila;
    fila_vazia(&fila);
    insere_fila_vazia(&fila, 1);
    insere_fim(&fila,2);
    insere_fim(&fila,3);
    insere_fim(&fila,4);
    insere_fim(&fila,5);
    imprime(fila);
    retira(&fila);
    retira(&fila);
    retira(&fila);
    imprime(fila);
}
