import java.util.Scanner;

public class Main {
    static int[][] parent = new int[26][2]; // parent[부모노드][0] : 왼쪽 자식
                                            // parent[부모노드][1] : 오른쪽 자식
    static void preorder(char root) // 전위 순회
    {
        if(root == '.') return;
        else
        {
            System.out.print(root);
            preorder((char)parent[root-'A'][0]);
            preorder((char)parent[root-'A'][1]);
        }
    }
    
    static void inorder(char root) // 중위 순회
    {
        if(root == '.') return;
        else
        {
            inorder((char)parent[root-'A'][0]);
            System.out.print(root);
            inorder((char)parent[root-'A'][1]);
        }
    }
    
    static void postorder(char root) // 후위 순회
    {
        if (root == '.') return;
        else 
        {
            postorder((char)parent[root - 'A'][0]);
            postorder((char)parent[root - 'A'][1]);
            System.out.print(root);
        }
    }
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int n = s.nextInt();
      char x,y,z;
      for(int i=0;i<n;i++) // 부모노드의 자식 노드 받기
      {
          x = s.next().charAt(0);
          y = s.next().charAt(0);
          z = s.next().charAt(0);
          parent[x-'A'][0] = y;
          parent[x-'A'][1] = z;
      }
      preorder('A');
      System.out.println();
      inorder('A');
      System.out.println();
      postorder('A');
    }
}
