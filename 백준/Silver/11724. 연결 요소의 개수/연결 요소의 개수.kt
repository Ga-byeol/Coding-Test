import java.util.*

var edge = Array<ArrayList<Int>>(1001){ArrayList()}
var marked = Array<Boolean>(1001){false}
var cnt = 0

fun dfs(n : Int)
{
    if(marked[n]) return
    marked[n] = true
    for(x in edge[n]) dfs(x)
}
fun main() {
    val s = Scanner(System.`in`);
    var n = s.nextInt()
    var m = s.nextInt()
    
    for(i in 0..m-1)
    {
        val x = s.nextInt()
        val y = s.nextInt()
        edge[x].add(y)
        edge[y].add(x)
    }
    
    for(i in 1..n)
    {
        if(!marked[i])
        {
            dfs(i)
            cnt++
        }
    }
    println(cnt)
}