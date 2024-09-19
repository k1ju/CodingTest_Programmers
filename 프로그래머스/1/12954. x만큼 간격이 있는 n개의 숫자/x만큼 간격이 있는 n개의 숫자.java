import java.util.*;
class Solution {
    public long[] solution(int x, int n) {
       
        long[] array = new long[n];
        int count = 1;
        
        for(int i=0; i<n; i++){
            array[i] = (long)x * (count+i);
        }
        
        
        return array;
    }
}