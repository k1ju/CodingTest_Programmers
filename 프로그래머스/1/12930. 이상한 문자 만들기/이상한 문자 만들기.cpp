#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int j=0;
    for(int i=0; i<s.size(); i++){
        
        if(s[i] == ' '){
            j=0;
            continue;
        }
        if(j%2==0){
            s[i] = toupper(s[i]);
            j++;
        } else {
            s[i] = tolower(s[i]);
            j++;
        }
        
        
    }
    
    
    return s;
}