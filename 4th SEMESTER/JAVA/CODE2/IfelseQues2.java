import java.util.Scanner;
public class IfelseQues2 {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        if (x < 6){
            System.out.println("Hello   ");
        }
        if(x == 5){
            System.out.println("Hi  ");
        }
        else{
            System.out.println("Hey ");
        }
    }
}
