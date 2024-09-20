import java.util.*;
class Solution {
    public int[] solution(int[] numbers) {
        
        ArrayList<Integer> arr = new ArrayList<>();
        
        for(int i=1; i<numbers.length; i++){
            
            for(int j=0; j<i; j++){
                int sum = numbers[i] + numbers[j];
                
                if( !(arr.contains(sum)) ){
                    arr.add(sum);
                }
            }
        }
        
        int[] answer = new int[arr.size()];
        
        
        for(int i=0; i<arr.size(); i++){
            answer[i] = arr.get(i);
        }
        
        Arrays.sort(answer);
        
        
        return answer;
    }
}