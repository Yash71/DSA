//circular queue
#include<iostream>
using namespace std;
class CircularQueue{
  int* arr;
  int size;
  int front;
  int rear;
  int capacity;
  int max_size;

  public:
  CircularQueue(int default_size=10){
    arr=new int[default_size];
    size=0;
    front=-1;
    rear=-1;
    max_size=default_size;
    for(int i=0;i<max_size;i++)
      arr[i]=-1;
  }
  void enqueue(int data){
    if(full()){
      cout<<"Queue overflow"<<"\n";
      return;
    }
    if(empty()){ //first insertion
      front=0;
      rear=0;
      arr[rear]=data;
    }
    else{
      arr[rear]=data;
    }
    rear=(rear+1)%max_size; //circular implementation 
    size++;
  }
  void dequeue(){
    if(empty()){
      cout<<"Queue underflow"<<"\n";
      return;
    }
    arr[front]=-1;
    front=(front+1)%max_size;
    if(front==rear){
      front=-1;
      rear=-1;
    }
    size--;
  }
  bool empty(){
    return(front==-1 && rear==-1);
  }
  bool full(){
    return(rear!=-1 && rear==front);
  }
  int getFront(){
    if(empty()){
      cout<<"queue underflow"<<"\n";
      return -1;
    }
    return arr[front];
  }
  int getRear(){
    if(empty()){
      cout<<"queue underflow"<<"\n";
      return -1;
    }
    return arr[(rear-1+max_size)/max_size];
  }
  int getSize(){return size;}
  int getMaxSize(){return max_size;}
  void print(){
    if(empty()){
      cout<<"List is empty"<<"\n";
    }
    for(int i=0;i<max_size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<"\n";
  }
};  
int main(){
  CircularQueue cq=CircularQueue(5);
  cq.enqueue(10);
  cq.enqueue(20);
  cq.enqueue(30);
  cq.print();
  cq.dequeue();
  cq.dequeue();
  cq.print();
  cq.dequeue();
  cq.dequeue();
  cq.dequeue();
  cq.dequeue();
  cq.dequeue();
  cq.print();
  return 0;
}