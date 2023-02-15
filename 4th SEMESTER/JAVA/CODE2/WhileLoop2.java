import java.util.Scanner;

public class WhileLoop2{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        int d = 2;
        while( d <= n-1) {
            if (n % 2 == 0){
                System.out.println("Not Prime");
                return;
            }
            d = d + 1;
        }
        System.out.println("Prime");
    }
}


