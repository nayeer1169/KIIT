public class Ques1 {
    public static void main(String[] args){

        int result_1= add(10,20);
        System.out.println("Result of adding two integer " + result_1);

        double result_2=add(10.5 , 20.5);
        System.out.println("Result of adding two doubles " + result_2);

        int result_3 = add(10,20,30);
        System.out.println("Result of adding three doubles " + result_3);
    }
    public static int add(int a, int b){
        return a+b;
    }

    public static double add(double a , double b){
        return a+b;
    }

    public static int add(int a , int b , int c){
        return a+b+c;
    }
}
