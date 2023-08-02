#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "write a string: ";
    cin >> str;
    int len = str.length();
    string rev = "";
    rev.resize(len);
    
    for (int i=0,j=len-1;i<len;i++,j--) {
        rev[i] = str[j];
    }
    
    if (str.compare(rev) == 0) {
        cout << str << " is palindrome" << endl;
    } else {
        cout << str << " not a palindrome" << endl;
    }
    
    return 0;
}
