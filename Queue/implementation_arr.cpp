#include<iostream>
using namespace std;
class queue{
  int* arr;
  int front;
  int rear;
  int max_size;
  public:
  queue(int default_size=10){
    arr=new int [default_size];
    max_size=default_size;
    front=-1;
    rear=-1;
  }
  bool empty(){
    return (front==-1);
  }
  bool full(){
    return rear==max_size;
  }
  void enqueue(int data){
    if(full()){ //checking if the queue is full
      cout<<"Queue overflow"<<"\n";
      return;
    }
    if(front==-1){ //if this is the first insertion
      front=0;
      rear=0;
      arr[rear]=data;
    }
    else{
      arr[rear]=data;
    }
    rear++;
  }
  void dequeue(){
    if(empty()){
      cout<<"Queue underflow"<<"\n";
      return;
    }
    arr[front]=-1;
    front++;
    if(front==rear){
      front=-1;
      rear=-1;
    }
  }
  int getFront(){
    if(empty()){
      cout<<"Queue underflow"<<"\n";
      return -1;
    }
    return arr[front];
  }
  int getRear(){
    if(empty()){
      cout<<"Queue underflow"<<"\n";
      return -1;
    }
    return arr[rear-1];
  }
  void print(){
    if(empty()){
      cout<<"Queue is empty"<<"\n";
      return;
    }
    int i=0;
    while(i<max_size){
      cout<<arr[i]<<" ";
      i++;
    }
    cout<<"\n";
  }
};
int main(){
  queue q= queue();
  q.enqueue(5);
  q.enqueue(5);
  q.enqueue(5);
  q.dequeue();
  q.getRear();
  q.getFront();
  q.print();
}