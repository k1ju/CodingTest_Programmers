#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    string newMyString = "";
    string newPat = "";

    for(auto& i: myString){
        i=tolower(i);
    }
    for(auto& i: pat){
        i=tolower(i);
    }
    
    
    
    cout << myString << endl;
    cout << pat;
    
    if(myString.find(pat) != string::npos ){
        answer = 1;
    }
    
    return answer;
}