//WAP to demonstrate the following string method length(), trim() , charAT(), substring(), index 0f() , lastindex0f, replace(), getchars(); 
public class Ques3 {
    public static void main(String[] args) {

        String str = "Rajdhani Express";
        int length = str.length();
        System.out.println("The length of the string \"" + str + "\" is " + length);

        String str2 = "        Java Programming Language       ";
        String trimmedStr = str2.trim();
        System.out.println("The trimmed string is \"" + trimmedStr + "\"");

        char ch = str.charAt(2);
        System.out.println("The character at index 2 of the string \"" + str + "\" is '" + ch + "'");

        String subStr = str.substring(2, 6);
        System.out.println("The substring of the string \"" + str + "\" from index 2 to 6 is \"" + subStr + "\"");

        int index = str.indexOf('o');
        System.out.println("The index of the first occurrence of 'o' in the string \"" + str + "\" is " + index);

        int lastIndex = str.lastIndexOf('o');
        System.out.println("The index of the last occurrence of 'o' in the string \"" + str + "\" is " + lastIndex);

        String replacedStr = str.replace('o', 'a');
        System.out.println("The string \"" + str + "\" after replacing all 'o' with 'a' is \"" + replacedStr + "\"");

        char[] charArray = new char[5];
        str.getChars(0, 5, charArray, 0);
        System.out.println("The first 5 characters of the string \"" + str + "\" are: " + new String(charArray));
    }
}
