import java.util.Scanner;
public class Relational {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int i = s.nextInt();
        int j = s.nextInt();

        boolean isEq = (i == j);
        System.out.println("Is Equal " + isEq);
        boolean neq = (i != j);
        System.out.println("Not Equal " + neq);
        boolean isGr = (i > j);
        System.out.println("Greater " + isGr);
        boolean isGrEq = (i >= j);
        System.out.println("Greater Than Equal " + isGrEq);
        boolean isLess = (i < j);
        System.out.println("Is Less Than " + isLess);
        boolean isLessEq = (i <= j);
        System.out.println("Is Less than Equal " + isLessEq);
    }
}
