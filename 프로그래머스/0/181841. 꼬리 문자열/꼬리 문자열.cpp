#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    
    
    
    for(auto i : str_list){
        if(i.find(ex) == string::npos){
            answer += i;
        }
    }
    cout << answer;
    
    return answer;
}