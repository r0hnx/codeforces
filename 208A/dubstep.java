import java.util.Scanner;

/**
 * dubstep
 */
public class dubstep {

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        String s = obj.nextLine();
        System.out.println(s.replaceAll("WUB", " ").replaceAll(" +", " ").trim());
        obj.close();
    }
}