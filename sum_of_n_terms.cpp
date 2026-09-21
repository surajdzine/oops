#include<iostream>
using namespace std;
// sum of 1 to 10 
int sum(int n ){
    int sum = 0;
    for (int  i = 0; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}
int main(){
    int num;
    cout<<"enter the number from which you want sum :";
    cin>>num;
    int n=num;
    cout<<sum(n);
}