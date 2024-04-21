#include <string>
#include <vector>
#include <cctype>
#include <iostream>
using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    
    for(auto& i: my_string){
            if(i== alp[0]){
                //i를 대문자로 바꾸는함수
                i = toupper(i);
            }
    }
    cout << my_string;
    
    return my_string;
}