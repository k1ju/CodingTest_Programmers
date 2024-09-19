import java.util.*;
class Solution {
    public String[] solution(String my_string) {

        String[] strArr = my_string.split(" ");
        
        ArrayList<String> list = new ArrayList<>();

        for(int i=0; i< strArr.length; i++){
            
            if(strArr[i].equals("")){
                continue;
            } else{
                list.add(strArr[i].trim());            
                
            }
        }

        String[] answer = new String[list.size()];
        
        for(int i=0; i< list.size(); i++){
            answer[i] = list.get(i);
        }
        
        return answer ;
    }
}