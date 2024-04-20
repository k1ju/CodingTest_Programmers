#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int a =0,b=0,c=0;
    
    a = hp/5;
    hp %= 5;
    b = hp/3;
    hp %= 3;
    c = hp;
        
    
    answer = a+ b+c;
    
    
    
    return answer;
}