import java.util.*;
public class PatternTriangle2 {
    public static void main(String[] args){
        Scanner s  = new Scanner(System.in);
        int n = s.nextInt();
        int i = 1;
        while (i<=n) {
            int j = 1;
            while (j <= n - i) {
                System.out.print(" ");
                j++;
            }
            j = 1;
            while (j <= i) {
                int val=j;
                System.out.print(val);
                val++;
                j++;
            }
            System.out.println();
            i++;
        }
    }
}
