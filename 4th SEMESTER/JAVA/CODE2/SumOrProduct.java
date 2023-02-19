import java.util.*;
public class SumOrProduct {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        int choice;
        while (true) {
            System.out.println("Press 1 for addition");
            System.out.println("Press 2 for Multiplication");
            System.out.println("Press 3 for Exit");


            System.out.println("Make Your Choice");
            choice =s.nextInt();
            switch (choice) {

                case 1:
                int i = 1;
                int sum = 0;
                for (i = 1; i <= n; i++) {
                    sum += i;
                }
                System.out.println("Add " + sum);
                break;

                case 2:
                    int j = 1;
                    int mul = 0;
                    for (j = 1; j <= n; j++) {
                        mul *= j;
                    }
                    System.out.println("Mul " + mul);
                    break;

                case 3:
                    System.exit(0);

                default:
                    System.out.println("Invalid choice -1");
            }
        }
    }
}