#include<stdio.h>
#define MAX 10

int i,n,max=7,top=-1;

void push(int[],int);
void pop(int[],int);
void display(int a[MAX],int n) {
    printf("Result Array :\n");
    for(i = 0; i < n; i++) {
        ("%d", a[i]);
    }
}

int main(){
    int n,op;
	int a[MAX];
    
    do{
        printf("\nEnter option :\n");
        printf("1.Push\t2.Pop\t3.exit\n");
        scanf("%d", &op);
        
        if(op == 1){
            push(a, top);
            top++;
        }
        else if(op == 2){
            pop(a, top);
            top--;
        }
    }while(op != 3);

}

void push(int a[MAX],int top) {
    if(top == max)
        printf("Stack is Full");
    else {
        top++;
        printf("Enter the value : ");
        scanf("%d", &a[top]);
        
        printf("Result Stack :\n");
        for(i = 0; i <= top; i++)
            printf("%d ", a[i]);
    }
}    
void pop(int a[MAX],int top) {
    if(top == -1)
        printf("Stack is Empty");
    else {
        printf("Element to delete : %d", a[top]);
        top--;
        printf("\nResult Stack :\n");
        for(i = 0; i <= top; i++)
            printf("%d ", a[i]);
    } 
               
}


