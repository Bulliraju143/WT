#include<stdio.h>
#include<stdlib.h>
struct stu{
    int data;
    struct stu *link;
};
struct stu * add(struct stu *,int);
int main()
{
    struct stu *head=malloc(sizeof(struct stu));
    head->data=45;
    head->link=NULL;
    struct stu *tale=malloc(sizeof(struct stu));
    tale->data=55;
    tale->link=NULL;
    head->link=tale;
    int data=3;
    struct stu *ptr;
    head=add(head,data);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
struct stu * add(struct stu *head,int d){
    struct stu *ptr=malloc(sizeof(struct stu));
    ptr->data=d;
    ptr->link=head;
    head=ptr;
    return head;
}