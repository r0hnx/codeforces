import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
/**
 * boyOrGirl
 */
public class boyOrGirl {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Set<Character> ch = new HashSet<>();
        String username = in.nextLine();
        for (int i = 0; i < username.length(); i++) {
            ch.add(username.charAt(i));
        }
        if (ch.size() % 2 == 0) {
            System.out.println("CHAT WITH HER!");
        } else {
            System.out.println("IGNORE HIM!");
        }
        in.close();
    }
}