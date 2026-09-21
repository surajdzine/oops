#include<iostream>
using namespace std;
// int main(){
//     int last_number ,number,sum_digit =0;
//     cout<<"enter your number :";
//     cin>>number;
//     while (number>0)// equal to 0 nahe hoga 
//     {
//         last_number= number%10;
//         number=number/10;
//         sum_digit+=last_number;

//     }
//     cout<<"sum of digit:"<<sum_digit;
// }


// with function 
int digit(int number ){
    int last_digit,sum_digit=0;
    while (number>0)
    {
        last_digit= number%10;
        number = number/10;
        sum_digit+=last_digit;
    }
   return sum_digit; 
}

int main(){
    int num;
    cout<<"enter your number :";
    cin>>num;
    cout<<digit(num);

}