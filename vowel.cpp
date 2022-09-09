#include<iostream>
#include<ctype.h>

using namespace std;

int main(){
    char ch;
    cout<<"Enter a letter : ";
    cin>>ch;
    int vowel(char);
    if(vowel(ch)) cout<<"letter is vowel"<<endl;
    else cout<<"letter is not vowel"<<endl;
}
int vowel(char ch){
    switch(tolower(ch)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return 1;
        default: return 0;
    }
    
}