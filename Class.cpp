#include <iostream>
#include <sstream>
#include<cstring>
#include<string.h>

using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    public:
    int age,standard;
    string first_name,last_name;
    void set_age(int age)
    {
        this->age=age;
    }
    int get_age()
    {
        return this->age;
    }
    void set_first_name(string name)
    {
        first_name=name;
    }
    string get_first_name()
    {
        return this->first_name;
    }
    void set_last_name(string name)
    {
        last_name=name;
    }
    string get_last_name()
    {
        return this->last_name;
    }
    void set_standard(int standard)
    {
        this->standard=standard;
    }
    int get_standard()
    {
        return this->standard;
    }
    
    string to_string()
    {
        string data = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
        return data;
    }
    
    ~Student()
    {}
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin>>age>>first_name>>last_name>>standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    cout<<st.get_age()<<"\n"<<st.get_last_name();
    cout<<", "<<st.get_first_name();
    cout << "\n"<<st.get_standard();
    cout<<"\n";
    cout<<"\n";
    cout<<st.to_string();
    
    return 0;
}

