import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        char cur = sc.next().charAt(0);
        System.out.println(Math.abs(cur - 'I') + 84);
    }
}