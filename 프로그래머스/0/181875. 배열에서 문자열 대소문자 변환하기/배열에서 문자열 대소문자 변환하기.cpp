#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(int i=0; i<strArr.size(); i++){
        if(i%2==1){  // 홀수면
            for(int j=0; j<strArr[i].length(); j++){
                strArr[i][j] = toupper(strArr[i][j]);
            }
        } else {
            for(int j=0; j<strArr[i].length(); j++){
                strArr[i][j] = tolower(strArr[i][j]);
            }
            
        }
    }
    
    return strArr;
}