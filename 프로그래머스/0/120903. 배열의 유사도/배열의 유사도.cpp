#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for(auto v: s1){
        auto pos = find(s2.begin(), s2.end(), v);
        if(pos != s2.end() ){
            answer++;
        }
    }
    
    return answer;
}