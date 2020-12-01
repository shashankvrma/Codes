#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void insert(stack<int> &s, int ele){
    if(s.size() == 0){
       s.push(ele);    
       return;
    }   
    int temp = s.top();
    s.pop();
    insert(s, ele);
    s.push(temp);
    return;
}

void reverse(stack<int> &s){
    if(s.size() == 1)
       return;
    int temp = s.top();
    s.pop();
    reverse(s);
    insert(s, temp);
    return;
}

int main(){
    stack<int> s;
    s.push(1); s.push(11); s.push(3); s.push(21); s.push(0);
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
