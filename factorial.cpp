#include<iostream>

using namespace std;
int fact(int n){
    if(!n) return 1;
    return n*fact(n-1);
    
}
int main(){
    int n;
    cout<<"Enter a no.:";
    cin>>n;
    cout<<"factorial of"<<n<<":"<<fact(n);
}