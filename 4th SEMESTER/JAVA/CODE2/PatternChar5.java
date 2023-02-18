import java.util.Scanner;
public class PatternChar5 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int i=n+64;
        int j=0;
        while (i>64) {
            int k = n-j+64;
            while (k <= n+64) {
                System.out.print((char)(k));
                k++;
            }
            System.out.println();
            i--;
            j++;
        }
    }
}