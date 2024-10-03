import java.util.*;

class Solution {
    public String[] solution(String[] strings, int n) {
        ArrayList<String> arr = new ArrayList<>();
        for (int i = 0; i < strings.length; i++) {
            arr.add("" + strings[i].charAt(n) + strings[i]);
        }
        Collections.sort(arr);
        String[] answer = new String[arr.size()];
        
        for(int i=0; i< strings.length; i++){
            answer[i] = arr.get(i).substring(1,arr.get(i).length());
        }
        
        return answer;
    }
}