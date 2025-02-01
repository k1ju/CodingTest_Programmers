import java.util.*;
class Solution {
    public int solution(int[] numbers) {
//         int answer = 45;
        
//         for(int i=0; i< numbers.length; i++){
//             answer-=numbers[i];
//         }
        
//         return answer;
        
        
        int answer=0;
        
        ArrayList<Integer> list = new ArrayList<>();
        
        for(int x: numbers){
            list.add(x);
        }
        
        for(int i=0; i<10; i++){
            int num = i;
            if(!list.contains(num)){
                answer+=num;
            }
        }
        return answer;
    }
}