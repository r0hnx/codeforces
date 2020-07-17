import java.util.Scanner;

public class chatRoom{
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        String str = obj.nextLine();
        String x = "hello";
        int k = 0;
        for (int i = 0; i < str.length(); i++) {
            if(k == x.length()) break;
            if(str.charAt(i) == x.charAt(k)) k++;
        }
        if(k >= x.length()) System.out.println("YES");
        else System.out.println("NO");
        obj.close();
    }
}