#include<stdio.h>
#include<malloc.h>
typedef struct node{
    int num;
    struct node *next;

}NODE;
NODE *start, *p, *q;
void createNode(){

    if(start==NULL){
        p=(NODE*)malloc(sizeof(NODE));
        scanf("%d",&p->num);
        p->next=p;
        start = p;
        }

        else{

        p=(NODE*)malloc(sizeof(NODE));
        scanf("%d",&p->num);
        p->next=start;
        q=start;
        while(q->next != start){
            q = q -> next;
        }

        q -> next=p;

        }
}
/*void insertNode(int a , int s) {
    int i;
            p = (NODE *) malloc(sizeof(NODE));
            p->num = a;
            p->next = NULL;
            q = start;
    for(i = 1 ; i < s - 1 ; i++){
        q = q->next;
    }
    p->next = q->next;
    q->next = p;
}
//Deletion
void deleteNode(int s){

    int i;
    q = start;
    for(i = 1 ; i < s - 1 ; i++){
        q = q->next ;
    }
    p = q->next;
    q->next = p->next;
    free(p);
}
*/


int main()
{   int c;
    int position , num;
    start=p;
    do{

        createNode();
        printf("Press 1 to continue\n");
        scanf("%d",&c);




}while(c==1);
q=start;
do{
printf("%d\n",q->num);
q=q->next;
}while(q!=start);



/*position = 3;
    num = 89;
    insertNode(num,position);
    printf("After Insertion\n \n");
    for(q = start ; q != NULL ; q = q->next) {
        printf("%d \n",q->num);
    }*/
return 0;

}
