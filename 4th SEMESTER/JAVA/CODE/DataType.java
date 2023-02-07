public class DataType {
    public static void main(String[] args){
        char c = 'a';
        System.out.println('a'+3);    // we willl 100 as output since 'a' ascii value is 97 + 3 is 100
        System.out.println(c+3);

        int i = c + 10;
        System.out.println(i);       // output is 107

        // char  abc =i; this is error bcz  we try to write integer into characterits not possible
         i = c;   //its correct bcz char into integer is okayy

        long l = i;   //same as above  (int to long posible but [i = l] reverse is false)

        double d = i;  //same as above (int to double possible but [i = d] reverse is false)

       // float f =1.23;   //to avoid error wwe have to say to system treat the given data in 4 bit data
        float f = 1.23f;   // if f is not written at last it will treat as double
        //f = d; coz double 8 byte ka hai float 4 byte ka hai but reverse id=s possible
        d  =  f;
        int j = 100;
    }
}
