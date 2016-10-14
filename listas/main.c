#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int valor;
    struct nodo *next;
};
void imprimir(struct nodo *head)
{
    struct nodo *t;
    t = head;
    while(t!=NULL)
    {
        printf("%d",t->valor);
        t = t->next;
    }
}
void inserar_inicio(struct nodo *head, int n)
{
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->valor=n;
    nuevo->next=head;
    head=nuevo;
    //imprimir(head);
}
void insertar_posi(struct nodo *head, int p, int n)
{
    struct nodo *nuevo, *cur, *temp;
    nuevo=malloc(sizeof(struct nodo));
    int i;
    nuevo->valor=n;
    nuevo->next=NULL;
    temp=head;
    cur=head->next;
    for(i=1; p>i; i++)
    {
        temp=temp->next;
        cur=cur->next;
    }
    temp->next=nuevo;
    nuevo->next=cur;
    int val;
    struct node *next;
   // imprimir(head);
};
void concatenar(struct nodo *lista1, struct nodo *lista2, int tam) //tamaño lista1
{
    struct nodo *temp;
    temp=lista1;
    int i;
    for(i=1; tam>i; i++)
    {
        temp=temp->next;
    }
    temp->next=lista2;
    imprimir(lista1);
}

void crear(struct nodo *head, int n){
    struct nodo *cur;
    struct nodo *prev;
    prev = head;
    int i;
    for(i=2;i<=n;i++)
    {
        cur = malloc(sizeof(struct nodo));
        cur->valor=i;
        prev->next=cur;
        prev=cur;
    }
    prev->next= NULL;
    //imprimir(head);
}

void eliminar(struct nodo *head, int n)
{
    struct nodo *prev;
    struct nodo *cur;
    prev = head;
    cur = head->next;
    while(cur!=NULL)
    {
        if(cur->valor == n)
        {
            prev->next= cur->next;
            free(cur);
            break;
        }
        prev = cur;
        cur = cur->next;
    }
}

main()
{
    struct nodo *head;
    head = malloc(sizeof(struct nodo));
    head->valor=1;
    head->next=NULL;
    crear(head,6);
    /*//eliminar(head,3);
    inserar_inicio(head, 0);
    insertar_posi(head, 3, 0);*/
    struct nodo *lista2;
    lista2=malloc(sizeof(struct nodo));
    lista2->valor=1;
    lista2->next=NULL;
    crear(lista2,4);
    concatenar(head, lista2, 6);
}
