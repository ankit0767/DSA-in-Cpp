// insert two stack in a single array
#include <iostream>
using namespace std;
class stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    stack(int size){
        arr=new int[size];
        this->size=size;
        this->top1=-1;
        this->top2=size;


    }
     void push1(int data){
        if(top2-top1==1){
            cout<<"stack overflow"<<endl;
        }else{
            top1++;
            arr[top1]=data;
        }
     }
     void push2(int data){
        if(top2-top1==1){
            cout<<"stack overflow"<<endl;

        }else{
            top2--;
            arr[top2]=data;
        }
     }
     void pop1(){
        if(top1==-1){
            cout<<" stack underflow"<<endl;
        }else{
            arr[top1]=0;
            top1--;
        }
     }
     void pop2(){
        if(top2==size){
            cout<<"stack underflow"<<endl;

        }else{
            arr[top2]=0;
            top2++;
        }
     }
     void print(){
        cout<<"top1: "<<top1<<endl;
        cout<<"top2: "<<top2<<endl;
        for (int i=0;i<size;i++){
            cout<<arr[i]<<" "<<endl;
        }
     }

};
int main(){
    stack st(8);
    st.push1(10);
    st.push1(20);
    st.push1(80);
    st.push1(70);
    st.push2(100);
    st.push2(110);
    st.push2(500);
    st.push2(200);
    st.print();

    return 0;

}


