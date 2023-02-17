//Ques 3 add 2 number using command line or Scanner
import java.util.Scanner;

public class Ques3 {
    public static void main(String[] args){
        Scanner s = new Scanner (System.in);
        int i = s.nextInt();
        int j = s.nextInt();
        int sum;
        sum = i + j;
        System.out.println("The sum is  " + sum);
    }
}
