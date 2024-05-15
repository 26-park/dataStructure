#include "stack.h"

// TODO: Stack 클래스 구현 작성

Stack::Stack() : LinkedList() {
    
}

Stack::~Stack() {
    
}
Stack& Stack::operator +=(int i){
    push(i);
    return *this;


}
void Stack::push(int data) {
    insert(0, data); 
}

int Stack::pop() {
    int data = get(0);
    remove(0); 
    return data; 
}

int Stack::peek() {
    return get(0); // LinkedList의 get 함수를 사용하여 맨 앞의 데이터를 반환
}