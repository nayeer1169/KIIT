public class Ques3 {
    public static void main(String[] args){
        int a[] ={13,45,23,44,66,87,78,22,12,56};
        System.out.println(" Given Numbers are Odd ");

        for (int i=0;i<a.length;i++) {
            if (a[i] % 2 != 0) {
                System.out.println(a[i]);
            }
        }
        System.out.println(" Given Numbers are Even ");
        for (int i=0;i<a.length;i++){
            if (a[i]%2==0) {
                System.out.println(a[i]);
            }
        }
    }
}
