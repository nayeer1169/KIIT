import java.util.Scanner;
public class WhileLoopsQues {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        if (n % 2 == 0){
            System.out.println(n + n);
        }else{
            System.out.println(n);
        }
    }
}
