#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    
    for(auto v: numlist){
        if(v%n == 0){
            answer.push_back(v);
        }
    }
    
    return answer;
}