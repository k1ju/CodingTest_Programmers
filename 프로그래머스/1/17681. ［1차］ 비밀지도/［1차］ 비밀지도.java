class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        String[] answer = new String[n];
        
        for(int i=0; i<n; i++){
            
            StringBuilder sb1 = new StringBuilder();
            StringBuilder sb2 = new StringBuilder();
            int num1 = arr1[i];
            int num2 = arr2[i];
            
            while(num1 > 0){
                sb1.append(num1 % 2);
                num1/=2;
            }
            
            while(sb1.length()<n){
                sb1.append("0");
            }
            
            while(num2 > 0){
                sb2.append(num2 % 2);
                num2/=2;
            }
            
            while(sb2.length()<n){
                sb2.append("0");
            }
            
            String str1 = sb1.reverse().toString();
            String str2 = sb2.reverse().toString();
            
            StringBuilder sb3 = new StringBuilder();
            
            for(int j=0; j<n; j++){
                if(str1.charAt(j)=='1' || str2.charAt(j)=='1'){
                    sb3.append("#");
                } else{
                    sb3.append(" ");
                }
            }
           
            answer[i] = sb3.toString();
            
           
        }
        
        
        return answer;
    }
}