class Solution {
    public String solution(String s) {
        
        StringBuilder sb = new StringBuilder();
        String[] arr = s.split(" ",-1);
        
        for(String word: arr){
            
            System.out.println(word);
            if(word.equals(" ")){
                sb.append(" ");
                continue;
            }
            
            StringBuilder str = new StringBuilder();
            
            for(int j=0; j<word.length(); j++){
                
                char ch = word.charAt(j);
                if(j%2==0) {
                    str.append(Character.toUpperCase(ch));
                } else {
                    str.append(Character.toLowerCase(ch));
                }
            }
            sb.append(str).append(" ");
        }
        
        return sb.toString().substring(0,sb.length()-1);
        
        
        
        
//         String answer = "";
//         int index = 0;
        
//         for(int i=0; i<s.length(); i++){
            
//             char ch = s.charAt(i);
            
//             if(ch == ' '){
//                 answer += " ";
//                 index= 0;
//                 continue;
//             }
            
//             if(index %2==0){
//                 answer += Character.toUpperCase(ch);
//             } else{
//                 answer += Character.toLowerCase(ch);
//             }
//             index++;
            
//         }
        
        
//         return answer;
    }
}