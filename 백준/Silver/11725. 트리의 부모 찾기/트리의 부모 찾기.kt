import java.util.*

var edge = Array<ArrayList<Int>>(100001){ArrayList()}
var marked = Array<Boolean>(100001){false}
var parent = Array<Int>(100001){0}
var cnt = 0

fun dfs(n : Int)
{
    
    marked[n] = true
    for(x in edge[n])
    {
        if(!marked[x])
        {
            parent[x] = n
            dfs(x)
        }
        
    }
}
fun main() {
    val s = Scanner(System.`in`);
    var n = s.nextInt()
    
    for(i in 0..n-2)
    {
        val x = s.nextInt()
        val y = s.nextInt()
        edge[x].add(y)
        edge[y].add(x)
    }
    dfs(1)
    val sb = StringBuilder()
    for(i in 2..n)
    {
        sb.append(parent[i])
        sb.append('\n')
    }
    print(sb)
}