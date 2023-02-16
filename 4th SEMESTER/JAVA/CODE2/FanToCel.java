import java.util.Scanner;
public class FanToCel {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int f = s.nextInt();
        //int cel = (5/9)*(f - 32);    //we are using inuilt funct that is 5/9      prblm in int/int is int and ans is in decimel (float) so 5/9 is coming 0 and 0*anything is 0
       // int cel = 5 * (f-32) / 9;

        int cel = (int)((5.0/9)*(f - 32));   //2nd trick
        System.out.println(cel);

//        System.out.println(9/5);
//        System.out.println(9.0/5);

//        float f = s.nextInt();
//        float cel = 5 * (f-32) / 9;    // another trick
//        System.out.println(cel);
    }
}
