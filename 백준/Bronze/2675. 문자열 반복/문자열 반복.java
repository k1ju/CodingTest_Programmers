import java.util.*;

//TIP 코드를 <b>실행</b>하려면 <shortcut actionId="Run"/>을(를) 누르거나
// 에디터 여백에 있는 <icon src="AllIcons.Actions.Execute"/> 아이콘을 클릭하세요.
public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int count = Integer.parseInt(sc.nextLine());

        for(int k=0; k<count; k++) {
            String[] arr = sc.nextLine().split(" ");
            String str = arr[1];
            int num = Integer.parseInt(arr[0]);

            StringBuilder answer = new StringBuilder();

            for(int i=0; i<str.length(); i++) {
                for(int j=0; j<num; j++){
                    answer.append(str.charAt(i));
                }
            }

            System.out.println(answer.toString());
        }
    }
}