import java.util.Scanner;

public class Beecrowd2694 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        while(n-- > 0){
            String s = sc.nextLine();
            boolean b = true;
            int sum = 0;

            String digit = "";
            for (int i = 0; i < s.length(); i++) {
                if (Character.isDigit(s.charAt(i))){
                    digit += s.charAt(i);
                    b=true;
                }else{
                    b = false;
                }

                if (!b && !digit.isEmpty()){
                    int temp = Integer.parseInt(digit);
                    sum+=temp;
                    digit = "";
                }
            }

            if (!digit.isEmpty()){
                int temp = Integer.parseInt(digit);
                sum+= temp;
            }

            System.out.println(sum);

        }
    }
}
