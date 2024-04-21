#include <string>
#include <vector>
#include <iostream>
#include <cctype>
using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto& i: myString){
        i=tolower(i);
    }
    
    cout << myString;
    
    return myString;
}