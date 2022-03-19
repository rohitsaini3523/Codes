#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long 
int main()
{
   /*  cout << max(3, 4) << endl;
    cout << min(100, 8) << endl;
    cout << sqrt(100) << endl;
    cout << round(2.6) << endl;
    cout << log(2) << endl;
    cout << abs(9.98) << endl;
    cout << ceil(9.98) << endl;
    cout << floor(9.98) << endl; */
    //Ternary operator
    // variable = (condition) ? expressionTrue : expressionFalse;
   vector<int> v(3);
   vector<int> v1{3};
   v.push_back(7);
   v1.push_back(7);
   for (int i = 0; i < v.size(); i++)
   {
       cout << v[i] << " ";
   }
   cout << endl;
   for (int i = 0; i < v1.size(); i++)
   {
       cout << v1[i] << " ";
   }
   

   return 0;
}