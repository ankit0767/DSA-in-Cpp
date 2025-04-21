#include <iostream>
#include <stack>

using namespace std;
void solve(stack<int>&st,int &pos, int &Ans){
    if(pos==1){
        Ans= st.top();
        return;
    }else{
       int temp=st.top();
       pos--;
        st.pop();
        solve(st,pos,Ans);
        st.push(temp);
    }

}
int getElement(stack<int>&st){
    int pos=st.size();
    if(st.empty()){
        return -1;

    }else{
        if(pos & 1){
            pos=(pos/2) +1;
        }else{
            pos=pos/2;
        }
        int Ans=-1;
        solve(st,pos,Ans);
        return Ans;
    }

}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    int mid=getElement(st);
    cout<<"middle element:"<<mid<<endl;
    return 0;
    
}