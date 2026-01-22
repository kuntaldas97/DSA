#include <iostream>
#include <vector>
#include <utility>
#include <limits.h>

using namespace std;
class MinStack{
    public:
    vector<pair<int,int>>st;
    
    MinStack(){
    }
    void push(int val){
        pair<int,int> p;
        if(st.empty()){
            p.first=val;
            p.second=val;
            st.push_back(p);
        }
        else{
            p.first=val;
            int oldMin=st.back().second;
            p.second=min(oldMin,val);
            st.push_back(p);
        }
    }
    void pop(){
        st.pop_back();
    }
    int top(){
        return st.back().first;
    }
    int getMin(){
        return st.back().second;
    }
};

int main(){
    MinStack* obj = new MinStack;

    obj->push(-2);
    obj->push(0);
    obj->push(-3);

    int minn=obj->getMin();
    cout << minn << endl;
    obj->pop();
    
    int topp = obj->top();
    cout << topp << endl;

    minn = obj->getMin();
    cout << minn << endl;

    return 0;
}