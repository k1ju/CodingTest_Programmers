#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(string s) {
    bool answer = false;
    bool isLength =false;
    bool isNum = false;
    
    if(all_of(s.begin(), s.end(), ::isdigit)){
        isNum = true;
    }
    
    if(s.length()==4 || s.length()==6 ){
        isLength = true;
    }
    
    if(isNum==true && isLength == true){
        answer = true;
    }
    
    
    
    return answer;
}