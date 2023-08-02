#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Write a Paragraph\n";
    getline(cin, str);
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;
    int numbers = 0;
    int special_char = 0; // Added a semicolon here
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        } else if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            numbers++;
        } else if(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' || str[i]=='*' || str[i]=='(' || str[i]==')' || str[i]=='-' || str[i]=='=' || str[i]=='_' || str[i]=='+' || str[i]==',' || str[i]=='.' || str[i]=='/' || str[i]=='<' || str[i]=='>' || str[i]=='?' || str[i]=='`' || str[i]=='~'){
            special_char++;
        } else {
            consonants++;
        }
    }
    
    cout << "Total vowels: " << vowels << endl;
    cout << "Total consonants: " << consonants << endl;
    cout << "Total spaces: " << spaces << endl;
    cout << "Total numbers: " << numbers << endl;
    cout << "Total Special Character: " << special_char << endl;
    
    return 0;
}
