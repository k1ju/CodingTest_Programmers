import java.util.*;
class Solution {
    public int[] solution(int[] answers) {

        
        int correctCount1 = 0;
        int correctCount2 = 0;
        int correctCount3 = 0;
        
        int[] way1  = new int[]{1,2, 3, 4, 5};
        int[] way2  = new int[]{2, 1, 2, 3, 2, 4, 2, 5};
        int[] way3  = new int[]{3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        
        for(int i=0; i<answers.length; i++){
            
            if(answers[i] == way1[i%5]){
                correctCount1++;
            }
            
            if(answers[i] == way2[i%8]){
                correctCount2++;
            }
            
            if(answers[i] == way3[i%10]){
                correctCount3++;
            }
        }
       
        int maxScore = Math.max(correctCount1, Math.max(correctCount2,correctCount3));
       
        ArrayList<Integer> list = new ArrayList<>();
        
        if(correctCount1 == maxScore){
            list.add(1);
        }
        if(correctCount2 == maxScore){
            list.add(2);
        }
        if(correctCount3 == maxScore){
            list.add(3);
        }
        
        int[] answer = new int[list.size()];
        
        for(int i=0; i<list.size(); i++){
            answer[i] = list.get(i);
        }
        return answer;
    }
}