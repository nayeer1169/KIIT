import java.util.Scanner;
public class Pattern10 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int i = 1;
        int counter = 1 ;
        while ( i <= n){
            int k = 1;
            while (k <= i){
                System.out.print(counter);
                counter++;
                k++;
            }
            System.out.println();
            i++;
        }
    }
}