import java.util.Scanner;
public class TakingInput1 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String str =s.nextLine();   //we can also just use next instead of nextline next break around space eg if it abc def output will abc only
        System.out.println(str);

        //but if we want char only i donnt want string so
        char c = str.charAt(0);

        int p = s.nextInt();
        int r = s.nextInt();
        int t= s.nextInt();

        int si=(p*r*t)/100;

        long l= s.nextLong();

        double d = s.nextDouble();
        float f = s.nextFloat();

        System.out.println(si);
    }
}
