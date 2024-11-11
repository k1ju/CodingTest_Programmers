import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();

        ArrayDeque<Character> dq = new ArrayDeque<>();

        int answer = 0;
        for(int i=0; i<str.length(); i++) {

            char ch = str.charAt(i);
            char chNext=' ';
            if(i<str.length()-1){
                chNext = str.charAt(i+1);
            }

            if(ch=='('){
                if(chNext==')'){
                    answer += dq.size();
                    i++;
                } else{
                    dq.addFirst('(');
                    answer++;
                }
            } else{
                dq.removeFirst();
            }
        }

        System.out.print(answer);

    }
}

