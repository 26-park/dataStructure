#ifndef QUEUE_H
#define QUEUE_H

// TODO: Queue 클래스 정의 작성
#include "linked_list.h"

class Queue : public LinkedList {
public:
    Queue(); // 생성자
    ~Queue(); // 소멸자

    void push(int data); 
    int pop(); 
    int peek(); 
    Queue& operator +=(int i);
};

#endif