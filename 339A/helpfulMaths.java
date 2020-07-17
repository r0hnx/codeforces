import java.util.Arrays;
import java.util.Scanner;

/**
 * helpfulMaths
 */
public class helpfulMaths {

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        char[] str = obj.next().replace("+", "").toCharArray();
        Arrays.sort(str);
        for (int i = 0; i < str.length-1; i++) {
            System.out.print(str[i]+"+");
        }
        System.out.print(str[str.length-1]);
        obj.close();
    }
} 