#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    
    int sum = 0;
    string numberStr = to_string(n);
    
    for(int i =0; i< numberStr.length(); i++){
        sum +=  numberStr[i] - '0';
    }
    
    int answer = sum;

    cout << answer;
    return answer;
}