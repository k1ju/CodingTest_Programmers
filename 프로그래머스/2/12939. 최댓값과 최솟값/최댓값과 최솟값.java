import java.util.*;

class Solution {
    public String solution(String s) {
        String answer = "";
        String[] array = s.split(" ");
        
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        
        for(int i=0; i<array.length; i++){
            pq.add(Integer.parseInt(array[i]));
        }
        int min = pq.peek();
        int max = 0;
        
        while(!pq.isEmpty()){
            max = pq.poll();
        }
        
        answer += min + " " + max;
        
        return answer;
    }
}