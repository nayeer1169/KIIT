import com.sun.source.doctree.SystemPropertyTree;

import java.util.*;
public class Ques1 {
    public static void main(String[] args){
//        System.out.println();
        Scanner s = new Scanner(System.in);
        int g=s.nextInt();
        if (g>90 && g<=100){
            System.out.println("O");
        }
        else if(g>80 && g<=90){
            System.out.println("E");
        }
        else if(g>70 && g<=80){
            System.out.println("A");
        }
        else if(g>60 && g<=70){
            System.out.println("B");
        }
        else if(g>50 && g<=60){
            System.out.println("C");
        }
        else if(g>40 && g<=50){
            System.out.println("D");
        }
        else if(g<40){
            System.out.println("E");
        }
        else{
            System.out.println("Invalid");
        }
    }
}
