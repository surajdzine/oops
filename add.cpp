#include<iostream>
using namespace std;
int  add(int a ,int b){
    return(a+b); 

}

int main(){
    int num,num2;
cout<<"enter your number :";
cin>>num;
cout<<"enter your second number :";
cin>>num2;
cout<<add(num,num2);
}