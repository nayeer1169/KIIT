import java.util.Scanner;
public class LogicalOpr {
    public static void main(String [] args){
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int c = s.nextInt();

        boolean isAlargest = (a >= b) && (a >= c);
        System.out.println(isAlargest);     // and logical operator\
        System.out.println((a >= b) || (a >= c));
        System.out.println(!(a >= b));
    }
}
