import java.io.*;

public class Ques2 {
    public static void main(String[] args) {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the name of the source file: ");
        String sourceFile = "input2.txt";

        try {
            sourceFile = reader.readLine();
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.print("Enter the name of the destination file: ");
        String destinationFile = null;

        try {
            destinationFile = reader.readLine();
        } catch (IOException e) {
            e.printStackTrace();
        }

        try (Reader sourceReader = new FileReader(sourceFile);
             Writer destinationWriter = new FileWriter(destinationFile)) {

            int character;

            while ((character = sourceReader.read()) != -1) {
                destinationWriter.write(character);
            }

            System.out.println("File copied successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}