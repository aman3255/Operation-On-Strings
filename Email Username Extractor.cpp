#include <iostream>
using namespace std;

int main() {
    string email;
    cout << "write your email: ";
    cin >> email;
    int i=email.find('@');
    string user_name=email.substr(0,i);
    cout<<"Your user Name is "<<user_name<<endl;
    return 0;
}
