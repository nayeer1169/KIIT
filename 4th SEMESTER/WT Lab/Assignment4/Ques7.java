import java.util.Scanner;

public class Ques7 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int fact = 1;
        int i = 1;
        int number = s.nextInt();

        for (i = 1 ; i <= number ; i++){
            fact = fact * i;

        }
        System.out.println("Factorial of given number is " + fact);

    }
}
