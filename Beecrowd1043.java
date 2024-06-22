import java.util.Scanner;

public class Beecrowd1043 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float a = sc.nextFloat();
        float b = sc.nextFloat();
        float c = sc.nextFloat();

        if ((a+b)>c && (b+c)>a && (c+a)>b){
            System.out.printf("Perimetro = %.1f\n",(a+b+c));

        }else {
            System.out.printf("Area = %.1f\n",((a+b)/2)*c);
        }
    }
}
