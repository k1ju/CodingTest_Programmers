#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    
for(string str: strArr){
    if(str.find("ad") == -1){
        answer.push_back(str);
    }
}        
        
    
        
    
    return answer;
}