#include<iostream>
using namespace std;
void table(int a){
    for(int i = 1;i<=10;i++){
        cout<<a*i<<"\n";
    }       
}

int main(){
   table(3);
   return 0;
}