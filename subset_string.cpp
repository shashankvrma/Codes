#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

void subset(string s,string output){
    if(s.size()==0){
        cout<<output<<" ";
        return;
    }
    string op1 = output;
    string op2 = output;
    op2.push_back(s[0]);
    s.erase(s.begin()+0);
    subset(s,op1);
    subset(s,op2);
    return;
}

int main(){
    string s = "abc";
    string op = "";
    subset(s,op);
    return 0;
}
