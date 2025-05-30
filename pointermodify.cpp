#include <iostream>
using namespace std;
int main(){
    string food ="pizza";
    string *ff =&food;
    cout << "value of food:" << food << endl;
    cout << "address of food:" << ff << endl;
    *ff = " chicken biriyani";
    cout << "value of food:" << food << endl;
    cout << "address of food:"<< ff << endl;
    
}