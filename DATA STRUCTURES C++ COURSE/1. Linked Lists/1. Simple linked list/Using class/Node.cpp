#include <iostream>
#pragma once

class Node{

    public:
        int data;
        Node *next;

        Node()
        {
            this->data = 0;
            this->next = NULL;
        }

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }

    private:
};