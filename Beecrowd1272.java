import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Beecrowd1272 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        while (n>0){
            String st = sc.nextLine();

            String[] word = st.split(" ");
            String[] newWord = new String[word.length];
            int c = 0;
            for (int i = 0; i < word.length; i++) {
                if (word[i] != ""){
                    newWord[c] = word[i];
                    c++;
                }
            }

            for(int i = 0; i < c; i++) {
                System.out.print(newWord[i].charAt(0));
            }
            System.out.println();
            n--;
        }
    }
}
