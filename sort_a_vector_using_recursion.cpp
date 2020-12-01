#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void insert(vector<int> &v, int temp){
    if(v.size()==0 || v[v.size()-1] <= temp){
        v.push_back(temp);
        return;
    }    
    int val = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
}

void sort(vector<int> &v){
    if(v.size()==1)
    return;
    int val = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,val);
}



int main(){
    vector<int> v;
    v.push_back(1); v.push_back(9); v.push_back(5); v.push_back(3); v.push_back(3);
    sort(v);
    for(auto it = v.begin() ; it!=v.end() ; it++){
        cout<<*it<<" ";
    }
    return 0;
}
