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
        stack(){
            top = NULL; // awalnya top itu NULL
        }

        int push(int value){
            node *newNode = new node(); // buat node baru
            newNode->data = value; // isi data node baru dengan value yang diberikan
            newNode->next = top; // buat next node baru menunjuk ke top (node sebelumnya)
            top = newNode; // update top untuk menunjuk ke node baru (sekarang node baru adalah top)
            cout << "Push value: " << value << endl;    
            return value;   
        }
};

