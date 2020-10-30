#include <iostream>
#include <sstream>
using namespace std;
#include <string>

class Student{
private:
    int age_, standard_;
    std::string first_name_;
    std::string last_name_;
public:
    void set_age(int age){
        age_ = age;
    }
    void set_standard(int standard){
        standard_ = standard;
    }
    void set_first_name(std::string first_name){
        first_name_ = first_name;
    }
    void set_last_name(std::string last_name){
        last_name_ = last_name;
    }
    int get_age(){
        return age_;
    }
    int get_standard(){
        return standard_;
    }
    std::string get_first_name()
    {
        return first_name_;
    }
    std::string get_last_name()
    {
        return last_name_;
    }
    std::string to_string()
    {
        stringstream ss;
        char ch = ',';
        ss<<age_<<ch<<first_name_<<ch<<last_name_<<ch<<standard_;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}