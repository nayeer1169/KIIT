import java.util.*;
public class Ques2 {
    public static void main(String[] args){
//        Scanner s = new Scanner (System.in);
//        int i = nextInt();
//        int j = nextInt();
//        int k = nextInt();

        int i = Integer.parseInt(args[0]);                  //First number
        int j = Integer.parseInt(args[1]);                  //second number
        int k = Integer.parseInt(args[2]);                  //third number
        if(i>=j && j>=k){
            System.out.println(i +" I is the largest number");
        }
        else if(j>=k && k>=i){
            System.out.println(j + " J is the largest number");
        }
        else{
            System.out.println(k + " K is the largest number");
        }
    }
}

