#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
        for(int i=0; i<t.size()- p.size()+1; i++){
        string str = t.substr( i ,p.size());
        if (str<= p){
            cout << str << endl;
            answer++;
        }
    }
    
    return answer;
}