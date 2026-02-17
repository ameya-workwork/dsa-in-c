#include <stdio.h>
#define MAX 50   // maximum size of stack

// Global variables
int stack[MAX];
int tos = -1;

void push(int stack[],int size,int item){
    int *top;
    top=&tos;
    printf("size of your stack is %d\n",size);
    if(*top==size-1){
        printf("overflow , stack is full\n");
    }
    else {
        *top=*top+1;
        stack[*top]=item;
        printf("the stack is now:\n");
        for(int i=0;i<=*top;i++){
            printf("%d\n",stack[i]);
        }
        
    }
    
    
    
    
}

void pop(int stack[],int elem){
    int *top;
    top=&tos;
    
    if(tos==-1){
        printf("stack is empty , nothing can be popped");
    }
    else {
        int j=0;
        while(j!=elem)
        {
            if (elem > tos+1){
                printf("cant pop that many elements sorry");
                return;
            }
            
            tos=tos-1;
            j++;
        }
        
        printf("this is current stack:\n");
        for(int i=0;i<=tos;i++){
            printf("%d\n",stack[i]);
        }
        
    }
    
    
}




void is_pallindrome(int stack[]){
    int top;
    top=tos;
    
    if (tos == -1) {
        printf("Stack is empty, cannot check palindrome.\n");
        return;
    }
    
    int stack1[tos+1];
    for(int i=0;i <= tos;i++)
    {
        stack1[i]=stack[top];
        top--;
    }
    
    for(int i=0;i <=tos ;i++){
        
        if(stack1[i] != stack[i]) {
        printf("stack is NOT pallindrome\n");
        return;
        }
        
    }
     printf("yay its palindrome");
    
}



void status(int stack[],int size){
    if(tos==-1){
        printf("stack is empty");
    }
    
    
    if (tos+1==size){
    printf("stack si full!");
    }
    else if(tos+1<size){
    printf("stack has space");
    
}

}


int main() {
    
   int stack[15];

    
            
while (1){
    int choice,size;
    printf("here is a menu to perform functions in a stack:\n");
    printf("1. press 1 To insert elements into stack \n");
    printf("2. press 2 To remove elements from stack \n");
    printf("3. press 3 To check if stack is pallindrome \n");
        printf("4.press 4 To check status of array \n");
            printf("5. press 5 to exit out of menu \n");
            
    printf("enter your choice:");        
    scanf("%d",&choice);
    switch(choice){
       case 1:
       printf("how many elements would you like in your stack?");
       scanf("%d",&size);
       int item;
       printf("what element would you like to insert?");
       
       scanf("%d",&item);
       push(stack,size,item);
       break;
       
       case 2:
        int elem;
       printf("how many elements would you like to pop?");
       scanf("%d",&elem);
       pop(stack,elem);
       break;
       
       case 3:
       is_pallindrome(stack);
       break;
       
       case 4:
       status(stack,size);
       break;
       case 5:
       printf("\nexiting menu...");
       return 0;
       
       default:
       printf("\ninvalid option, pls look at menu again");
    }
    
    
}            

 return 0;
}
