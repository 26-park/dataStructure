#include "queue.h"

// TODO: Queue 클래스 구현 작성
Queue::Queue() : LinkedList(){
    
}

Queue::~Queue() {
    
}
Queue& Queue::operator+=(int i) {
    push(i);
    return *this;
}
void Queue::push(int data) {
    insert(size_, data); 
}

int Queue::pop() {
    int data = get(0); 
    remove(0); 
    return data; 
}

int Queue::peek() {
    return get(0); 
}