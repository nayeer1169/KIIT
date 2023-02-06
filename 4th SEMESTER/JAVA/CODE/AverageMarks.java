import java.util.Scanner;
public class AverageMarks {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        String str =s.nextLine();
        System.out.println(str);
        int m1 = s.nextInt();
        int m2 = s.nextInt();
        int m3 = s.nextInt();
        System.out.println((m1+m2+m3)/3);

    }
}