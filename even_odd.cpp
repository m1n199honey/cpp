#include<iostream>

using namespace std;
int even_odd(int n){
    if(n%2==0) return 1;
    else return 0;
}
int main(){
    int n;
    cout<<"Enter a no.:";
    cin>>n;
    if(even_odd(n)) cout<<"No is Even"<<endl;
    else cout<<"No is Odd"<<endl;
    return 0;
}