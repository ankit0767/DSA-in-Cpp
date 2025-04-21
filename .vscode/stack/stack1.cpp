#include <iostream>

using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        arr= new int[size];
        this->size=size;
        this->top=-1;

    }
    void push(int data){
        if(top==size-1){
            cout<<"OVERFLOW"<<endl;
            return;
        }else{
            top++;
            arr[top]=data;
        }
       
    }
    void pop(){
        if(top==-1){
            cout<<"underflow"<<endl;
            return;
        }else{
            top--;
        }
    }
    bool isEmpty(){
        if(top==-1){
           return true;
        }else{
            return false;
        }
    }

    int getSize(){
        return top+1;
    }
    void print(){
        cout<<"stack :";
       
        for(int i=0; i<getSize(); i++){
            cout<< arr[i]<< " ";

        }
    }
};
int main(){
    stack st(8);
    st.push(20);
    st.push(30);
    st.push(50);
     st.pop();
     cout << "Size of stack: " << st.getSize() << endl;

    st.isEmpty();
    st.print();
    return 0;
}