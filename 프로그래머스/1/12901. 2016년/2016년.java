class Solution {
    public String solution(int a, int b) {
        String answer = "";
        int dayNumber = 0;
        
        int[] dayCount = new int[] {31,29,31,30,31,30,31,31,30,31,30,31};
        
        String[] dayString = new String[]{"SUN","MON","TUE","WED","THU","FRI","SAT"};
        
        
        for(int i=1; i<= a-1; i++){
            dayNumber += dayCount[i-1];
        }
        dayNumber += b;
        
        String day = dayString[(dayNumber+4)%7 ];
        
        return day;
    }
}