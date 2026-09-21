#include<iostream>
using namespace std;
// factorial function 
int factorial(int a ){
    int factorial = 1; 
    for(int i =1 ;i<=a ;i++){
        factorial*=i;
    }
    return factorial;
}

// here the comes the main 
int main(){
    int num;
    cout<<"enter your number :";
    cin>>num;
    cout<<factorial(num);

}