#include <iostream>
#include <string>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(){
            next = NULL;
        }
};

class stack{
    private:
        node* top; // ini dia bintang kita (pointer top)
    public:
        stack(){}
};

