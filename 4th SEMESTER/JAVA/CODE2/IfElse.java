import java.util.Scanner;
public class IfElse {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int i = s.nextInt();
       int rem = i % 2;
        if ( rem == 0 ){
            System.out.println("Even");
            return;
        }else{                                                  //this program simply consists of even odd
            System.out.println("Odd");
        }
    }
}
