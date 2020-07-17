import java.util.Scanner;

/**
 * beautifulMartix
 */
public class beautifulMartix {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        char[][] m = new char[5][5];
        for (int i = 0; i < 5; i++) {
            m[i] = in.nextLine().replaceAll(" ", "").toCharArray();
        }
        int r= -1;
        int c = -1;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (m[i][j] == '1') {
                    r = i;
                    c = j;
                }
            }
        }
        int moves = Math.abs(r-2)+Math.abs(c-2);
        System.out.println(moves);
        in.close();
    }
}