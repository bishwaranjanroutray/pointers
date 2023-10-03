#include<iostream>
using namespace std;

int product(int* p1,int* p2){
    return (*p1)*(*p2);
}

int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    int* p1=&a;
    int* p2=&b;
    cout<<product(p1,p2);
}