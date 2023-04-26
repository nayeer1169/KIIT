import java.io.*;

public class Ques1 {
    public static void main(String[] args) {
        String filename = "input.txt";
        String outputFilename = "output.txt";
        
        try {
            FileReader fileReader = new FileReader(filename);
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            
            FileWriter fileWriter = new FileWriter(outputFilename);
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);
            
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                String[] words = line.split("\\s+");
                
                for (String word : words) {
                    if (word.length() > 0) {
                        String capitalizedWord = word.substring(0, 1).toUpperCase() + word.substring(1);
                        bufferedWriter.write(capitalizedWord + " ");
                    }
                }
                bufferedWriter.newLine();
            }
            
            bufferedReader.close();
            bufferedWriter.close();
            
            System.out.println("Successfully capitalized words in file.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}