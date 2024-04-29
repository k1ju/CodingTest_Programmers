#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    int cnt=5;
    
    for(int i=0; i<names.size(); i++){
        if(cnt==5){
            answer.push_back(names[i]);
            cnt = 1;
            continue;
        }
        cnt++;
    }
    
    return answer;
}