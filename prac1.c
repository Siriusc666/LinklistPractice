#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}Node;

     // 请在此添加你的代码
    /********** Begin *********/
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

Node* ReverseList(Node *head)    
{    
    Node *newHead;    
    if(head==NULL||head->next==NULL)    
        return head;    
    /*递归*/    
    newHead=ReverseList(head->next);    
    /*回溯：将当前表头结点链接到逆序链表的尾部*/    
    head->next->next=head;    
    head->next=NULL;    
    return newHead;    
}    


    /**********  End  **********/
int main(void)  
{  
    Node *phead;  
    phead = CreatList();  
    printf("链表逆置前的数据:\n");  
    ShowList(phead);  
    phead = ReverseList(phead); 
    printf("\n");
    printf("链表逆置后的数据:\n");  
    ShowList(phead);  
    return 0;  
}   