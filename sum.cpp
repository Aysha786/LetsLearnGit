#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=0;
    c=a+b;
    return c;
}
int main(){
    cout<<"Aysha is a pro coder"<<"\n";
    int n ,m;
    cout<<"enter the 2 numbers";
    cin>>n>>m;
    int c=sum(n,m);
    cout<<"sum of m and n = "<<c<<" ";
    return 0;
}