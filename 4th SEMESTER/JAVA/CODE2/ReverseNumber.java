import java.util.*;
public class ReverseNumber {
    public static void main(String[] args){
        Scanner s = new Scanner (System.in);
        int n=12345;              //number
        int r=0;                   //reverse
        while (n!=0){
            int remainder = n % 10;
            r = r*10 +remainder;
            n = n/10;
        }
        System.out.println("the reverse number is  " + r);
    }
}
