// new way of parametrise constructor 
#include<iostream>
using namespace std;

class Student{
    public:
    // variables 
    int id;
    string name;
    int  semester;
    // parametrise constructor 

    Student(int id ,string name , int semester ){
        cout<< "student parametrise constructor "<<endl;
        this->id=id;
        this->name=name;
        this->semester=semester;

    }
// function 
    // behaviour 
    void sleep(){
        cout<<this->name<<" is sleeping "<<endl;
    }
        void walk(){
        cout<<this->name<<" is walking  "<<endl;
    }
        void play(){
        cout<<this->name<<" is playing  "<<endl;
    }

    // parametrise distructor 
    ~Student(){
        cout<<"student parametrise distructor  "<<endl;
    }


};


int main(){
    //objects 
    Student A(1,"suraj",3);// here i gave the value
    
    cout<< "name of the student is :"<<A.name<<endl<<""<<"and the id number is :"<<A.id<<endl;
    A.sleep();
    return 0;
}