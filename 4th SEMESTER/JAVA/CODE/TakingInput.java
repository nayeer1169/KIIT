import java.util.Scanner;
public class TakingInput {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in); //to make new scanner nd it is done with the help of scan

        int i = scan.nextInt();
        int j = scan.nextInt();

        int k = i+j;
        System.out.println(k);
    }
}
