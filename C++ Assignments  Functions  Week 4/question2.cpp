#include<iostream>
using namespace std;
float area(int r){
   float a;
   a = 3.14*r*r;
   return a;
}
int main(){
    int r;
    cout<<"enter radius : ";
    cin>>r;
    cout<<area(r);
}