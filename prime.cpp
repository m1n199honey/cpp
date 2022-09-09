#include<iostream>

using namespace std;
int prime(int n){
    // int f=1;
    if(n==1) return 0;
    if(n==2||n==3) return 1;
    if(n%2==0) return 0;
    for(int i=5;i<n;i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter a no.:";
    cin>>n;
    if(prime(n)) cout<<"No is Prime"<<endl;
    else cout<<"No is Not a Prime"<<endl;
    return 0;
}