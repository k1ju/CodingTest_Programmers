import java.util.*;

//TIP 코드를 <b>실행</b>하려면 <shortcut actionId="Run"/>을(를) 누르거나
// 에디터 여백에 있는 <icon src="AllIcons.Actions.Execute"/> 아이콘을 클릭하세요.
public class Main {
    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine().trim();

        if(str.isEmpty()){
            System.out.println(0);
        } else{
            String[] arr = str.split(" ");
            System.out.println(arr.length);
        }
    }
}