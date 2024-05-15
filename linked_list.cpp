#include "linked_list.h"
#include <iostream>



// TODO: LinkedList 클래스 구현 작성

LinkedList::LinkedList(){
    head_=nullptr;
    size_=0;

}
LinkedList::~LinkedList(){
    Node *current = head_;
    while (current != nullptr) {
        Node *temp = current;
        current = current->next_;
        delete temp;
    }
}

void LinkedList::print(){
    Node *current = head_;
    while (current != nullptr) {
        std::cout << current->value_ << " ";
        current = current->next_;
    }
    std::cout << std::endl;
}

void LinkedList::insert(int index, int value){
    
    if (index==0)
    {
        Node *n = new Node(value);
        n->next_ = head_;
        head_ = n;
    }else{
        Node * pre = nullptr;
        Node * cur = head_;
        for (int i = 0; i < index; i++)
        {
            pre=cur;
            cur=cur->next_;
        }
        Node *n = new Node(value);
        pre->next_=n;
        n->next_=cur;
        
    }
    
    size_++;
    
    
    
    

};
int LinkedList::get(int index){
    Node *current = head_;
    for (int i = 0; i < index; i++) {
    current = current->next_;
    }
    return current->value_;
};
void LinkedList::remove(int index){
    Node *temp = nullptr;
    if (index == 0) {
        temp = head_;
        head_ = head_->next_;
    } else {
        Node *prev = nullptr;
        Node *current = head_;
        for (int i = 0; i < index; ++i) {
            prev = current;
            current = current->next_;
        }
        temp = current;
        prev->next_ = current->next_;
    }
    
    delete temp;
    --size_;

};