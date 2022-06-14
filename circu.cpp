#include<bits/stdc++.h>
using namespace std ;
struct cirq{
    int front=-1;
    int rear=-1;
    int arr[5];
}q;
void enq(int x){
    if(q.rear==-1){
        q.front=0;
        q.rear=0;
        q.arr[q.rear]=x;
    }
   else if((q.rear+1)%5==q.front){
       cout<<"overflow is happened"<<endl;
    }
    else{
       q.rear=(q.rear+1)%5;
        q.arr[q.rear]=x;
       

    }
}
void deq(){
      if (q.front==q.rear){
          q.rear=-1;
          q.front=-1;
     
    }

    else{
      
       q.front=(q.front+1)%5;



    }
}

int main(){
 char x;
 int num;
 while(true){
    cin>>x;
    switch(x){
        case 'a':
        cin>>num;
        enq(num);
        break;
        case 'b':
        deq();
        break;
        case 'c':
        if(q.front==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
       for(int i=q.front;i<=q.rear;i++){
       cout<<q.arr[i];
   }
        }
        
   return 0;

    }
 }
   
return 0;}