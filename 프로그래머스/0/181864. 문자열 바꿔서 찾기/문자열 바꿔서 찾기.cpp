#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(auto& i: myString){
        if(i == 'A'){
            i = 'B';
        } else if(i == 'B'){
            i='A';
        }
    }
    
    if(myString.find(pat) != string::npos){
        answer = 1;
    }
    
    return answer;
}