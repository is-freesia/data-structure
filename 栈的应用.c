#include<stdio.h>
#include <stdbool.h> //bool（布尔类型的头文件）
#include <string.h>
#include<stdlib.h>
#define maxsize 20
//数组栈

typedef int elementype;

typedef struct node{
    elementype data[maxsize];
    int top;
}myStack;

//访问栈中的元素
void visit(elementype c) 
{
    printf('%d',c);
}

//初始化栈
void inistack(myStack *s)   
{
    //s=(myStack *)malloc(sizeof(myStack));  如果没有规定栈
    s->top=-1;
}


//将栈清空
void ClearStack(myStack *s)
{
    free(s);
}

//进栈
void push(myStack *s,elementype e)
{
    if (s->top==maxsize-1)  return 0;
    else
    {
        s->top++;
        s->data[s->top]=e;
        return e;
    }
    
}

//出栈
void pop(myStack *s,int *e)
{
    if(s->top==-1)
    {
        printf("stack empty");
        return 0;
    }else{
        *e=s->data[s->top];
        s->top--;
        return ;
    }
}
int isEmpty(myStack *s)
{
    if(s->top!=-1){
        return 1;
    }
    return 0;
}
//取栈顶元素
void getTop(myStack *s,int *e)
{
    if(s->top==-1)
    {
        printf("stack empty");
        return;
    }
    else
    {
        *e = s->data[s->top];
        return;
    }
}

int main(){
    myStack s;
    int i,e;
    inistack(&s);
    printf("input e:");
    scanf("%d",&e);
    push(&s,e);
    pop(&s,&e);
    printf("%d ",e);
    getTop(&s,&e);
    return 0;
}