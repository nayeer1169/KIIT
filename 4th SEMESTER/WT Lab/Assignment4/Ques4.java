//Use a loop to show 1 to 10
import java.util.Scanner;
public class Ques4 {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        int i = 1;

        while ( i <= n ){
            System.out.println(i);
            i = i + 1;
        }
    }
}
