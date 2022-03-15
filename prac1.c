#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}Node;

     // ���ڴ������Ĵ���
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
    /*�ݹ�*/    
    newHead=ReverseList(head->next);    
    /*���ݣ�����ǰ��ͷ������ӵ����������β��*/    
    head->next->next=head;    
    head->next=NULL;    
    return newHead;    
}    


    /**********  End  **********/
int main(void)  
{  
    Node *phead;  
    phead = CreatList();  
    printf("��������ǰ������:\n");  
    ShowList(phead);  
    phead = ReverseList(phead); 
    printf("\n");
    printf("�������ú������:\n");  
    ShowList(phead);  
    return 0;  
}   