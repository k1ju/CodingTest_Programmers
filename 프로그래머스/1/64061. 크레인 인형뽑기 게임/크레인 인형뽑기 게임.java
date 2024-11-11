import java.util.*;
class Solution {
    public int solution(int[][] arr, int[] moves) {

        int n = arr.length;
        int m = moves.length;
        int answer = 0;
        ArrayDeque<Integer> dq = new ArrayDeque<>();
        

        for(int i=0; i<m; i++){

            int num = 0;
            int move = moves[i]-1;

            for (int j = 0; j < n; j++) {
                if (arr[j][move] != 0) { 
                    num = arr[j][move];
                    arr[j][move] = 0; 
                    break;
                }
            }

            if (num != 0) {
                if (!dq.isEmpty() && dq.peekFirst() == num) {
                    dq.removeFirst();  
                    answer += 2; 
                } else {
                    dq.addFirst(num); 
                }
            }
        }

        return answer;
    }
}