#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    string str;
    
    for(auto i: my_string){
        if(isdigit(i) == true){
            str+=i;
        }    
    }
    
    for(int i=0; i<str.length(); i++){
        answer.push_back(str[i] - '0');
    }
    
    sort(answer.begin(),answer.end());
    
    return answer;
}