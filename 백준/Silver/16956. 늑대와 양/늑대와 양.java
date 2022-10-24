import java.util.Scanner;

public class Main {
    
    static String[] map = new String[501];
    static int r,c;
    
    static boolean check(int i,int j)
    {
        if(i > 1) if(map[i-1].charAt(j) == 'S') return true;
        if(i < r) if(map[i+1].charAt(j) == 'S') return true;
        if(j > 0) if(map[i].charAt(j-1) == 'S') return true;
        if(j < c-1) if(map[i].charAt(j+1) == 'S') return true;
        return false;
    }
    
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        r = sc.nextInt();
        c = sc.nextInt();
        StringBuilder board = new StringBuilder();
        board.append('1');
        board.append('\n');
        
        for(int i=0;i<=r;i++) map[i] = sc.nextLine();
        
        for(int i=1;i<=r;i++)
        {
            for(int j=0;j<c;j++)
            {
               
                if(map[i].charAt(j) == 'W' && check(i,j))
                {
                    System.out.println(0);
                    return;
                }
                if(map[i].charAt(j) == '.') board.append('D');
                else board.append(map[i].charAt(j));
            }
            board.append('\n');
        }
        System.out.println(board);
    }
}