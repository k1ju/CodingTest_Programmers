#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> num3;
    
    while(n > 0){
        num3.push_back(n%3);
        n /= 3;
    }
    
    for(int i=0; i<num3.size(); i++){
        cout <<  num3[num3.size()-1-i] * pow(3,i) << endl;
        
        answer +=  num3[num3.size()-1-i] * pow(3,i);
                
    }
    
    
    return answer;
}