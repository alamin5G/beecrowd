import java.util.Scanner;

public class Beecrowd2714 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        while (n > 0) {
            String s = input.nextLine();
            StringBuilder sb = new StringBuilder();
            if (s.startsWith("RA") && s.length() == 20) {
                boolean flag = false;
                for (int i = 2; i < s.length(); i++) {

                    if (s.charAt(i) != '0') {
                        flag = true;
                    }

                    if (flag){
                        sb.append(s.charAt(i));
                    }
                }
                System.out.println(sb);
            }else {
                System.out.println("INVALID DATA");
            }
            n--;
        }
    }
}
