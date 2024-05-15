#include "list.h"

// TODO: List 클래스 구현 작성
List::List() : LinkedList() {
    
}

List::~List(){
    LinkedList::~LinkedList();
}
void List::insert(int index, int value){
    LinkedList::insert(index,value);
}
