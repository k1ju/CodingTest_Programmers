#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    for(int i=0; i<number.size(); i++){
        
        for(int j=i+1; j<number.size(); j++){

            for(int k=j+1; k<number.size(); k++){
                cout << "i: " << number[i] << " j: " << number[j] << " k: " << number[k] << endl;
                if(number[i] + number[j] + number[k] == 0){
                    answer++;
                } 
                                
            }
        
        }
        
        
    }
    
    
    
    return answer;
}