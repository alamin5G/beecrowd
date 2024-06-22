import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Beecrowd3140 {
    public static void main(String[] args) {

        try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {

            String line;
            boolean body = false;
            while ((line = br.readLine()) != null){
                if(line.trim().equals("<body>")){
                    body = true;
                    continue;
                }

                if(line.trim().equals("</body>")){
                    break;
                }

                if (body){
                    System.out.println(line);
                }
            }

        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
