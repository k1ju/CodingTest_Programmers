#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto& i : myString){
        i = toupper(i);
    }
    
    cout << myString;
    
    return myString;
}