#include<iostream>
#define size 10
using std::cout;
class queue{
    int q[size],front,rear;
    public:
    queue(){
        front=-1;
        rear=-1;
    }
    bool isfull();
    bool isempty();
    int enqueue(int item);
    int dequeue();
    void display();
};

bool queue::isfull(){
    if(front==0 && rear==(size-1)){
        return true;
    }
    else
    return false;
}
bool queue::isempty(){
    if(front==-1)
    return true;
    else
    return false;
}
int queue::enqueue(int item){
    if(isfull()){
        cout<<"Queue if Full\n";
    }
    else
    {
       if(front==-1) front=0;
        q[++rear]=item;
        cout<<item<<" inserted\n";
    }
}
int queue::dequeue(){
    int item;
    if(isempty()){
        cout<<" Queue is empty\n";
    }
    else{
        item=q[front];
        if(front==rear)
        front=rear=-1;
        else
        front++;
    }
    return item;
}
void queue::display(){
    if(isempty()){
        cout<<" Queue is empty \n";
    }
    else{
        cout<<" Front Index -> "<<front<<std::endl;
        for(int i=front;i<=rear;i++){
            cout<<q[i]<<" ";
        }
        cout<<"\n Rear Index -> "<<rear<<std::endl;
    }
}
int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    cout<<q.dequeue()<<" Removed from queue\n";
    q.dequeue();
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);
    q.display();
    return 0;
}
