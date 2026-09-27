#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int semester;

    private:
    int gpa;

    public:
    //constructor 
    Student(int id,string name, int semester,int gpa)
{
    cout<<"student constructor";
    this->gpa=gpa;
    this->id=id;
    this->name="suraj";
    this->semester=3;
}

// method 
void sleep(){
    cout<<this->name<<" is sleeping "<<endl;
}

void dance(){
    cout<<this->name<<" is dancing "<<endl;
}

//distructor 
~Student(){
    cout<<"student distructor"<<endl;
}

// private behaviour 
private:
void result(){
    cout<<this->name<<" is result is :"<<this->gpa<<endl;
}
};

int main(){

Student A(2324,"suraj",3,9);
// here i am not able to access gpa because its private 
}