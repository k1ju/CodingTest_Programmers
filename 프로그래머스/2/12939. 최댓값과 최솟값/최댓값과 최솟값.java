import java.util.*;

class Solution {
    public String solution(String s) {
        
        String[] arr = s.split(" ");
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        
        for(int i=0; i<arr.length; i++){
            pq.add(Integer.parseInt(String.valueOf(arr[i])));
            
        }

        int min = pq.peek();
        int max = Integer.MAX_VALUE;
        while( !pq.isEmpty() ){
            max = pq.poll();
        }
        
        String answer = "";
        
        return min + " " + max;
        
        
        
    }
}