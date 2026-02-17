#include <stdio.h>
int n=0; 
int arr[15];//max size
void create(){
   
printf("how big array to create?");
scanf("%d",&n);

printf("enter elements of array:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("here is your created array:");
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
    
    
    
}

void disp(){
    if(n==0){
    printf("array is empty");
    }
    
    else{
        for(int i=0;i<n;i++){
            printf("%d is %d element\n",arr[i],i+1);
        }
        
    }
    
    
}

void insert(int pos, int x){
    if(pos>n){
        printf("invalid position of insertion");
    }
   
    for(int  j=n; j>=pos;j--){
        arr[j]=arr[j-1];
       
    }
    arr[pos-1]=x;
    n++;
    
    printf("new array is:");
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
} 
}

void delete(int pos){
     if(n==0)
    printf("not possible");
    }
    for(int i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("new array is:");
    for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
    
}

}


int main() {
    int choice;
    
    
    while(1){
    printf("list of functions to perform in array:\n");
    printf("1. create an array\n");
        printf("2. display elements with headings\n");
            printf("3. insert element at any position\n");
                printf("4.delete element at any position\n");
                printf("5. exit\n");
                printf("\nplease enter preferred choiuce:");
                scanf("%d",&choice);
                
                
    switch (choice){
        case 1:
        create();
        break;
        case 2:
        disp();
        break;
        
        case 3:
        printf("enter pos");
        int pos,x;
        scanf("%d",&pos);
        printf("\n element to insert:");
        scanf("%d",&x);
        insert(pos,x);
        break;
        
        case 4:
        printf("enter pos");
        int pos1;
        scanf("%d",&pos1);
        delete(pos1);
        break;
        case 5:
        printf("exitingg");
        return 0;
        
        default:
        printf("invalid choice\n");
        break;
    }       
}
    return 0;
}
