using System;

class Program
{
    static char[,] parent = new char[26,2];
    
    static void preorder(char root)
    {
        if(root == '.') return;
        else
        {
            Console.Write(root);
            preorder(parent[root-'A',0]);
            preorder(parent[root-'A',1]);
        }
    }
    
    static void inorder(char root)
    {
        if(root == '.') return;
        else
        {
            inorder(parent[root - 'A',0]);
            Console.Write(root);
            inorder(parent[root - 'A',1]);
        }
    }
    static void postorder(char root)
    {
        if(root == '.') return;
        else 
        {
            postorder(parent[root - 'A',0]);
            postorder(parent[root - 'A',1]);
            Console.Write(root);
        }
    }
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        
        for(int i=0;i<n;i++)
        {
            string[] s = Console.ReadLine().Split(' ');
            
            parent[char.Parse(s[0])-'A',0] = char.Parse(s[1]);
            parent[char.Parse(s[0])-'A',1] = char.Parse(s[2]);
        }
        preorder('A');
        Console.WriteLine();
        inorder('A');
        Console.WriteLine();
        postorder('A');
        Console.WriteLine();
    }
}