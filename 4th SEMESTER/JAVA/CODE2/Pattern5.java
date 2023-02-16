import java.util.Scanner;
public class Pattern5 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();                                                // o/p = ***  enter *** enter ***
        int i = 1;
        while ( i <= n){
            int k = 1;
            while (k <= n){
                System.out.print(k);
                k = k + 1;
            }
            System.out.println();
            i = i + 1;
        }
    }
}