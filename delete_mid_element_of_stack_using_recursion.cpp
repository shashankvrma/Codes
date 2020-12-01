#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(stack<int> &s, int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s,k-1);
    s.push(temp);
    return;
}

stack<int> min_delete(stack<int> s){
    if(s.size() == 0)
       return s;
    int k = (s.size()/2)+1;
    solve(s,k);
    return s;
}

int main(){
    stack<int> s;
    s.push(1); s.push(11); s.push(3); s.push(21); s.push(0);
    s = min_delete(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
