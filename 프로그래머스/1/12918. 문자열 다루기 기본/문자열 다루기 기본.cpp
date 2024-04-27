#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(string s) {
    bool answer = false;
    bool isLength =false;
    bool isNum = true;
    
    for( int i=0; i<s.length(); i++  ){
        if(!isdigit(s[i]))
        isNum = false;
    }
    
    if(s.length()==4 || s.length()==6 ){
        isLength = true;
    }
    
    if(isNum==true && isLength == true){
        answer = true;
    }
    
    
    
    return answer;
}