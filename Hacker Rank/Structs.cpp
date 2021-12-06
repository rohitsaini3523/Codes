#include<iostream>
#include<string>
using namespace std;
struct data
{
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main()
{
    struct data S1;
    cin >> S1.age;
    cin >> S1.first_name;
    cin >> S1.last_name;
    cin >> S1.standard;
    cout << S1.age << " " << S1.first_name << " " << S1.last_name << " " << S1.standard << endl;
    return 0;
}