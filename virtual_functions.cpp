#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

class Person{
public:
    Person(std::string name =  "Raj", int age = 25):name_{name}, age_{age}{}
    std::string name_;
    int age_;
    int sequential_id_ = 0;

    virtual void getdata(){}

    virtual void putdata(){}

    virtual ~Person(){};
};

class Professor: public Person{
public:
    Professor(int publications = 0, int curr_id = 0):publications_{publications}{}
    int publications_;

    virtual void getdata() override{
        std::cin >> name_;
        std::cin >> age_;
        std::cin >> publications_;
    }

    virtual void putdata() override{
        static int cur_id_;
        cur_id_++;
        std::cout << name_ << " " << age_ << " " << publications_ << " " << cur_id_ << std::endl;
    }

    virtual ~Professor(){};

};

class Student: public Person{
public:
    std::array<int, 6> marks_;

    virtual void getdata() override
    {

        std::cin >> name_;
        std::cin >> age_;
        for (int i = 0; i < 6; i++){
            std::cin >> marks_[i];
        }

    }

    int sum(){
        int sum = 0;
        for (int i = 0; i < 6; i++){
            sum = sum + marks_[i];
        }
        return sum;
    }

    virtual void putdata() override{
        static int cur_id_;
        cur_id_++;
        int total = sum();
        std::cout << name_ << " " << age_ << " " << total << " " << cur_id_ << std::endl;
    }

    virtual ~Student(){};
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++)
    {
        std::cin >> val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }

        else per[i] = new Student; // Else the current object is of type Student
        per[i]->getdata(); // Get the data from the user.
    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
