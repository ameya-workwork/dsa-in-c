
// Online C compiler to run C program online
#include <stdio.h>
int n;
int arr[15];

void create(){
    printf("how big array you want?");
    scanf("%d",&n);
    if(n==0){
        printf("array is empty");
    }
    else{
        printf("enter array:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        
        printf("here is array:\n");
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
    }
}

void insertion_sort(){
    int temp;
    for(int key=1;key<n;key++){
    for(int i=key;i>0;i--){
        if(arr[i]<arr[i-1]){
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
        
    }
    
}

printf("this is sorted array:\n");
for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
}                                  


void selection_sort(){
    int min_index,temp;
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
            
        }
       temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
        
        
        
        
    }
    
    printf("this is sorted array:\n");
for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
}                                  

    
    
    






int main() {
   create();
    
   
    insertion_sort();
    
    selection_sort();
    
}


