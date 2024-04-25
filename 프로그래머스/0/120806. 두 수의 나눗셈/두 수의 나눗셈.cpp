#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    string str = "";
    double number = (double)num1/num2; 
    
    
    number *= 1000;
    
    for(int i=0; i<to_string(number).length(); i++){
       if(to_string(number)[i] < 0){
           break;
       } 
        str += to_string(number)[i];
        
    }
    
    
        
    return number;
}