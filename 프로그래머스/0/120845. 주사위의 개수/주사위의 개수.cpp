#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    int widthNum = box[0] / n ;
    int lengthNum = box[1] / n ;
    int heightNum = box[2] / n ;
    
    
    
    answer = widthNum * lengthNum * heightNum;
    
    
    
    return answer;
}