#include <iostream>
using namespace std;

int stack[5];   // array untuk stack
int top = -1;   // posisi atas stack

int main(){

    // PUSH
    top++;
    stack[top] = 5;

    top++;
    stack[top] = 10;

    cout << "Isi stack setelah push:" << endl;
    for(int i = top; i >= 0; i--){
        cout << stack[i] << endl;
    }

    // POP
    cout << "\nData yang keluar: " << stack[top] << endl;
    top--;

    cout << "\nIsi stack setelah pop:" << endl;
    for(int i = top; i >= 0; i--){
        cout << stack[i] << endl;
    }

    return 0;
}