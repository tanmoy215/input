#include<iostream>
using namespace std;
int main(){
    char ch,cg;
    cout<<"enter Two Character : ";
    cin>>ch>>cg;
    int n1=(int)ch;
    int n2=(int)cg;
    int def = n2-n1;
    cout<<"Defference of Two ASCCI Value : "<<def;
    return 0;
}