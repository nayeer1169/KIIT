public class Ques2 {
    public static void main(String[] args) {
        String str = "Lenovo Monitor";
        String reversed = reverseString(str);
        System.out.println("Original string: " + str);
        System.out.println("Reversed string: " + reversed);

        String str1 = "Hello";
        String str2 = "World";
        boolean isEqual = compareStrings(str1, str2);
        System.out.println("String 1: " + str1);
        System.out.println("String 2: " + str2);
        System.out.println("Are the strings equal? " + isEqual);

        String mainString = "Hello World ";
        String insertString = "to the ";
        int position = 6;
        String newString = insertString(mainString, insertString, position);
        System.out.println("Main string: " + mainString);
        System.out.println("Insert string: " + insertString);
        System.out.println("Position: " + position);
        System.out.println("New string: " + newString);
    }

    public static String reverseString(String str) {
        StringBuilder sb = new StringBuilder(str);
        return sb.reverse().toString();
    }

    public static boolean compareStrings(String str1, String str2) {
        return str1.equals(str2);
    }

    public static String insertString(String mainString, String insertString, int position) {
        StringBuilder sb = new StringBuilder(mainString);
        sb.insert(position, insertString);
        return sb.toString();
    }
}