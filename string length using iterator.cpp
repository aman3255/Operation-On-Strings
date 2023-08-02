


#include <iostream>

using namespace std;

int main()
{
    int count=0;
    string str="Welcome";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++){
        // cout<<*it<<endl;
        count++;
    }
    cout<<"count"<<count<<endl;
    cout<<str.length()<<endl;
    return 0;
}
