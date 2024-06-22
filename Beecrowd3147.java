import java.util.Scanner;

public class Beecrowd3147 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[6];
        for (int i = 0; i < 6; i++) {
            arr[i] = sc.nextInt();
        }

        int good = arr[0]+arr[1]+arr[2]+arr[5];
        int bad = arr[3]+arr[4];
        if (good >= bad) {
            System.out.println("Middle-earth is safe.");
        }else{
            System.out.println("Sauron has returned.");
        }
    }
}
