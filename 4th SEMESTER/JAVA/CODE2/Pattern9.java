import java.util.Scanner;
public class Pattern9 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int i = 1;
        while ( i <= n){
            int k = 1;
            int startingNumber = i ;
            while (k <= i){
                System.out.print(startingNumber);
                startingNumber++;
                k++;
            }
            System.out.println();
            i++;
        }
    }
}