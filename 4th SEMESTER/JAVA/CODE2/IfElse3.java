import java.util.Scanner;
public class IfElse3 {
    public static void main(String[] args){                                //converting int to string
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        if (a == 1){
            System.out.println("One");
        }else if (a == 2){
            System.out.println("Two");
        }else if (a == 3){
            System.out.println("Three");
        }else{
            System.out.println("Invalid");
        }



        //OR
//
//        if (a == 1){
//            System.out.println("One");
//        }
//        if (a == 2){
//            System.out.println("Two");
//        }
//        if (a == 3) {
//            System.out.println("Three");
//        }
//        if (a == 4){
//            System.out.println("Invalid");
//        }
    }
}
