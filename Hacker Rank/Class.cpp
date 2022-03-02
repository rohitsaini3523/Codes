#include <iostream>
#include<sstream>
using namespace std;

class Student
{
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int t)
    {
        age = t;
    }
    void set_standard(int s)
    {
        standard = s;
    }
    void set_first_name(string first)
    {
        first_name = first;
    }
    void set_last_name(string last)
    {
        last_name = last;
    }
    int get_age()
    {
        return age;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    int get_standard()
    {
        return standard;
    }
    string to_string()
    {
        stringstream ss;
        ss << age;
        string s, k;
        ss >> s;
        s = s + "," + first_name + "," + last_name + ",";
        ss.clear();
        ss << standard;
        ss >> k;
        s = s + k;
        return s;
    }
};

int main()
{
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