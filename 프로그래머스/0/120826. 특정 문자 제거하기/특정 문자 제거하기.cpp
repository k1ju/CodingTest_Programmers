#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

string solution(string my_string, string letter) {
    
    unordered_set<char> s;
    string answer = "";
    
    for(char ch: my_string){
        
        if(ch != letter[0]){
            answer += ch;
        }
    }
    
    return answer;
}