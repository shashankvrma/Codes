#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void insert(stack<int> &s, int temp){
    if(s.empty() || s.top() >= temp){
        s.push(temp);
        return;
    }    
    int val = s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
}

void sort(stack<int> &s){
    if(s.size()==1)
    return;
    int val = s.top();
    s.pop();
    sort(s);
    insert(s,val);
}



int main(){
    stack<int> s;
    s.push(1); s.push(11); s.push(3); s.push(21); s.push(0);
    sort(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
