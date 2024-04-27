#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    if(isalpha(s[0])){
        answer += toupper(s[0]);
    } else{
        answer += s[0];
    }   
    
    for(int i=1; i<s.size(); i++){
        if(s[i-1] == ' ' && isalpha(s[i])){
            answer += toupper(s[i]);
            continue;
        } 
        answer += tolower(s[i]);
         
    }
    cout << answer;
    
    return answer;
}