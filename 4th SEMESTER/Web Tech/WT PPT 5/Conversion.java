public class Conversion {
    public static void main(String[] args){
        byte b ;
        int i = 257;
        double d = 323.142;
        System.out.println("conversion into byte");                    //conversion int to byte
        b = (byte) i;
        System.out.println("i to b " + i + " " + b);
        System.out.println("conversion into int");                     //conversion double to int
        i = (int) d;
        System.out.println("d to i " + d + " " + i);
        System.out.println("conversion into double");                   //conversion double to byte
        b = (byte) d;
        System.out.println("d to b " + d + " " + b);
    }
}
