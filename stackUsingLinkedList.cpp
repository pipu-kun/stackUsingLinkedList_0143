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

        // push buat nambah data ya
        int push(int value){ 
            node *newNode = new node(); // buat node baru
            newNode->data = value; // isi data node baru dengan value yang diberikan
            newNode->next = top; // buat next node baru menunjuk ke top (node sebelumnya)
            top = newNode; // update top untuk menunjuk ke node baru (sekarang node baru adalah top)
            cout << "Push value: " << value << endl;    
            return value;   
        }

        // pop buat ngambil/ngapus data dari stack
        void pop(){
            if (isEmpty()){
                cout << "Stack is empty." << endl;
            }
            node *temp = top; // buat pointer sementara untuk menyimpan node yang akan dihapus (node top saat ini)
            top = top->next; // update top untuk menunjuk ke node berikutnya (node di bawah top saat ini)
            cout << "Popped value: " << top->data << endl; // tampilkan nilai yang di-pop (nilai dari node yang sekarang menjadi top setelah update)
        }

        void peek(){

            if (top == NULL){
                cout << "List is empty." << endl;
            }else{
                node *current = top; // buat pointer sementara untuk menyimpan node yang akan ditampilkan (node top saat ini)
                    while (current != NULL){ 
                        cout << current->data << " " << endl; // tampilkan nilai dari node saat ini
                        current = current->next; // update pointer sementara untuk menunjuk ke node berikutnya (node di bawah node saat ini)
                    }
                cout << endl;
            }
        }

        bool isEmpty(){
            return top == NULL; // stack kosong jika top adalah NULL
        }
};

int main(){
    stack s;

    int choice = 0;
    int value;

    while (choice != 4){
        cout << "1.push\n";
        cout << "2.pop\n";
        cout << "3.peek\n";
        cout << "4.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            s.push (value) ;
            break;
        case 2:
            if (!s.isEmpty()) {
                s.pop();
            } else {
                cout << "Stack is empty. Cannot pop." << endl;
            }
            break;
        case 3:
            if (!s.isEmpty()) {
                s.peek();
            } else {
                cout << "Stack is empty. No top value." << endl;
            }
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "kalo milih mikir mas, yang bener aja lu!\n";
            break;
        }
    }


