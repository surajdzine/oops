//make a program with class which have 3  variable ,3 function , 3 object 
#include<iostream>
using namespace std;

// lets first make 3 variables 
class Student{
    public:
    int id;
    string name;
    int semester;

    // here came the parametrise constructor 
    Student(int id , string name , int semester ){
        cout << " Student is parametrise constructor "<<endl;
        this-> id = id ;
        this-> name  = name  ;
        this-> semester  = semester  ;
    }

    // copy constructor 
        Student(const Student &srcobj){
        cout << " Student is parametrise constructor "<<endl;
        this-> id = id ;
        this-> name  = name  ;
        this-> semester  = semester  ;
    }

    // lets make 3 function 
    void sleep(){
        cout << this->name << " is sleeping "<< endl;
    }
    void run(){
        cout<< this->name << " is running "<<endl;
    }
    void eat(){
        cout<<this->name << " is eating "<<endl;
    }

    ~Student(){
        cout << "Student destructive constructor "<<endl;
    }
};

int main(){
    // 3 object 
    Student A(3232, "suraj",3);
    Student B(3422, "singh",5);
    Student C (4253,"rawat", 6);
    // here i gave the value
    cout << "student name is :"<<A.name <<endl<<"and the id is :"<<A.id<<endl;
    A.eat(); 


    return 0;

}