#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    
    float discount = 1;
    
    if(price>= 500000){
        discount = 0.8;
    } else if(price >= 300000){
        discount = 0.9;
    }  else if(price >= 100000){
        discount = 0.95;
    }
        
    
    
    int answer =  discount * price;
    return answer;



}