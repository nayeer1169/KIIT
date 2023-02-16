import java.util.Scanner;
public class Pattern8 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int i = 1;
        while ( i <= n){
            int k = 1;
            while (k <= n){
                System.out.print(n - k + 1);
                k = k + 1;
            }
            System.out.println();
            i = i + 1;
        }
    }
}