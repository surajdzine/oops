//dynamic memory allocation 
#include<iostream>
using namespace std;

// here i make class name student 
class Student{
    public:
    int id;
    string name;
    int semester;

    // here i make constructor 

    Student(int id, string name, int semester){
        cout<<"student parametrise constructor "<<endl;
        this->id=id;
        this->name =name ;
        this->semester =semester ;
    }

    // here i declare the function / behaviour 

    void sleep(){
        cout<<this->name<< " is sleeping ";
    }
};

int main(){
    Student*A= new Student(342,"suraj",4);
    cout<< A->name<<endl;
    A->sleep();
    delete A;
}