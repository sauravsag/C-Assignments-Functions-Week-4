#include<iostream>
using namespace std;
int squ(int n){
    int squr = n*n;
    return squr;
}
int dig(int a){
    int digit = 0;
    for(int i = 1; a>0 ; i++){
        digit++;
        a = (a/10);
    }
    return digit ;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"square of given number = "<<squ(n)<<endl;
    cout<<"number of digit = "<<dig(n)<<endl;
}