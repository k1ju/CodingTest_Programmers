#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long totalPrice = 0;
    for(int i=0; i<count; i++){
        totalPrice += price * (i+1); 
    }
    
    if(money>= totalPrice){
        answer = 0;
    } else {
        answer = totalPrice - money;
    }
    
    

    return answer;
}