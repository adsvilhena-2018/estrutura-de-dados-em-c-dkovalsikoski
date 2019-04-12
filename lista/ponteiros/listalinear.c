#include <stdio.h>
#include <stdlib.h>

typedef struct *Node{
    int valor;
    struct Node *prox;
}no;

typedef struct *Lista{
    no *inicio;
    no *fim;
}lista;

void lista_vazio(Lista *lista){
    lista->inicio = NULL;
    lista->fim = NULL;
}

void insere_lista_vazia(Lista *lista, int valor){
    //aloca espaço para o novo nó
    list->inicio=malloc(sizeof(no));
    //define o ponteiro lista inicio para nulo
    list->inicio->prox=NULL;
    //recebe o valor
    list->inicio->valor=valor;
    //diz que o lista fim é o mesmo que o incio porque só tem ele 
    list->fim=list->inicio;
}

void insere_inicio(Lista *lista, int valor){
    if(list->inicio==NULL){
        insere_lista_vazia(lista, valor);
    } else {
        //aloca espaço pro novo nó
        no *novoNo = malloc(sizeof(no));
        //define um valor
        novoNo->valor=valor;
        //novo nó aponta para lista inicio
        novoNo->prox=list->inicio;
        //define o novo nó como lista inicio
        list->inicio=novoNo;
    }
}
void insere_fim(Lista *lista, int valor){
    if(list->inicio==NULL){
        insere_lista_vazia(list,valor)
    }
}


int main()
{
    return 0;
}
