#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

string solution(string my_string) {
    
    unordered_set<char> s;
    
    for(char ch: my_string){
        s.insert(ch);
    }
    
    
    string answer = "";
    // 리스트와 set은 이터레이터로 접근한다
    for(char ch: my_string){
        
        if(s.find(ch) != s.end()){
            answer +=ch;
            s.erase(ch);
        }
    }
    
    
    return answer;
}