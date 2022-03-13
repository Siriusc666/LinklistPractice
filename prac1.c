#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}Node;

     // 请在此添加你的代码
    /********** Begin **********/
Node* CreatList();
void ShowList(Node* head);

Node* CreatList()
{
    int lenth;
    scanf("%d",&lenth);
    Node *head,*cur,*pre;
    head = malloc(sizeof(Node));
    scanf("%d",&head->data);
    head->next = NULL;
    int i;
    pre = head;
    for(i = 1;i < lenth;i++)
    {
        cur = malloc(sizeof(Node));
        scanf("%d",&cur->data);
        cur->next = NULL;
        pre->next = cur;
        pre = cur;
    }
    return head;
}

void ShowList(Node* head)
{
    Node *cur;
    cur = head;
    while(cur != NULL)
    {
        printf("%d ",cur->data);
        cur = cur->next;
    }
}

    /**********  End  **********/
int main(void)  
{  
    Node *phead; 
    phead = CreatList();  
    ShowList(phead);
    return 0;  
}