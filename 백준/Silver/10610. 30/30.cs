using System;
using System.Text;
class Program
{
    static void Main() {
        string s = Console.ReadLine();
        int[] arr = new int[s.Length];
        int cnt=0;
        int len = s.Length;
        StringBuilder sb = new StringBuilder();
        
        foreach(char x in s) arr[cnt++] = x - 48;
        
        Array.Sort(arr);
        int sum=0;
        for(int i=0;i<len;i++) sum+=arr[i];
        if(arr[0] != 0||sum%3 != 0) Console.Write(-1);
        else for(int i=len-1;i>=0;i--) sb.Append(arr[i]);
    
        Console.Write(sb);
    }
}