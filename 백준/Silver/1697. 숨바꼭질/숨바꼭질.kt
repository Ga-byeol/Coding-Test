import java.util.*

var n = 0
var k = 0
var visited = Array(100001) {false}

fun bfs(x:Int,y:Int):Int
{
    val q = LinkedList<Pair<Int,Int>>()
    q.offer(Pair(x,0))
    visited[x] = true
    
    while(!q.isEmpty())
    {
        val (line,time) = q.poll()
        
        if(line == y) return time;
            
        if(line+1<100001 && !visited[line+1])
        {
            q.offer(Pair(line+1,time+1));
            visited[line+1] = true;
        }
        if(line-1>=0 && !visited[line-1])
        {
            q.offer(Pair(line-1,time+1));
            visited[line-1] = true;
        }
        if(line*2<100001 && !visited[line*2])
        {
            q.offer(Pair(line*2,time+1));
            visited[line*2] = true;
        }
    }
    return 0
}
fun main() {
    val s = Scanner(System.`in`);
    n = s.nextInt()
    k = s.nextInt()
    
    print(bfs(n,k))
}