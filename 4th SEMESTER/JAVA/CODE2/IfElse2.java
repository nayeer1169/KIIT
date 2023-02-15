import java.util.Scanner;
public class IfElse2 {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int c = s.nextInt();

//        if ( a >= b && a >= c){
//            System.out.println(a);
//        }else{
//            if ( b >= c && b >= a){
//                System.out.println(b);
//            }else{
//                System.out.println(c);
//            }
//        }

        // OR

        if ( a >= b && a >= c){
            System.out.println(a);
            System.out.println("A");
        }else if (b >= c && b >= a){
            System.out.println("B");
        System.out.println(b);
        }else {
            System.out.println(c);
            System.out.println("C");
        }
    }
}
