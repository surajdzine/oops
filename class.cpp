// here i am going to make class and object 

#include<iostream>
using namespace  std;

class Student {
    public:
    // attribute 
    int id;
    string name;
    int semester;

    // // default constructor 
    // Student(){
    //     cout<<"student default contructor"<<endl;
    // }

    //mostly we use parametrise constructor 
    Student(int id ,string name ,int semester ){
        cout<<"student parametrised constructor called ";
    }


    //behaviour 

    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }

        void eating(){
        cout<<this->name<<" is eating "<<endl;
    }
        void dancing (){
        cout<<this->name<<" is dancing "<<endl;
    }

    
    // // default distructor  
    // ~Student(){
    //     cout<<"student default distructor "<<endl;
    // }
};

int main(){
// attrbutes call kr diya 
//     Student A;
//     A.id=234;
//     A.name="suraj";
//     A.semester= 3;

//     //now behavious call karega 

// A.dancing();
// //next student 
//     Student B;
//     B.id=34434;
//     B.name="rawat";
//     B.semester= 4;
//      B.eating(); 




 return 0;
}
   

   