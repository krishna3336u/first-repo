#include<stdio.h>
struct priorityq{
    int data;
    int p;
};
struct priorityq arr[10];
int size=0;
void insert(int data,int p){
    int i;
    if(size==10){
        printf("overflow");
    }
    for( i=size-1;i>=0;i--){
        if(p<arr[i].p){
            arr[i+1].data=arr[i].data;
            arr[i+1].p=arr[i].p;

        }
        else{
            break;
        }
    }
     arr[i+1].data=data;
        arr[i+1].p=p;
        size++;
};

void display(){
        for(int i=0;i<size;i++){
            printf(" %d ",arr[i].data);
            printf(" %d ",arr[i].p);

        }
 }


int main(){
    insert(10,2);
    insert(20,1);
    insert(30,1);
    insert(40,2); 
    display();
    return 0;

}
    