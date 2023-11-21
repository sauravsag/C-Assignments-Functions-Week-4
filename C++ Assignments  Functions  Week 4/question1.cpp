#include<iostream>
using namespace std;
void squ(int n){
    for(int i = 1 ; i <= n ; i++){
        int square;
        square = i*i;
        cout<<square<<endl;
    }
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    squ(n);
}