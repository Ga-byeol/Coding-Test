import java.util.*

var edge = Array<ArrayList<Int>>(100001){ArrayList()}

var parent = Array<Int>(100001){0}
var n=0
var m=0
val dx = arrayOf(0,1,1,1,0,-1,-1,-1)
val dy = arrayOf(1,1,0,-1,-1,-1,0,1)

fun bfs(y : Int,x : Int): Int
{
    var marked = Array(n) { Array<Boolean>(m) {false}}
    if(edge[y][x] == 1) return 0
    marked[y][x] = true
    val q = LinkedList<Pair<Int,Int>>()
    q.offer(Pair(y,x))
    
    var step = 0
    while(!q.isEmpty())
    {
        val size = q.size
        
        for(i in 0..size-1)
        {
            val (ty,tx) = q.poll()
            for(dir in 0..7)
            {
                val nx = tx+dx[dir]
                val ny = ty+dy[dir]
                if(nx >= 0 && ny >= 0 && nx < m && ny < n)
                {
                    if(marked[ny][nx]) continue
                    if(edge[ny][nx] == 1) return step+1
                    marked[ny][nx] = true
                    q.offer(Pair(ny,nx))
                }
            }
        }
        step++
    }
    return step
}
fun main() {
    val s = Scanner(System.`in`);
    n = s.nextInt()
    m = s.nextInt()
    
    for(i in 0..n-1)
    {
        for(j in 0..m-1)
        {
            edge[i].add(s.nextInt())
        }
    }
    var result = -1
    for(i in 0..n-1)
    {
        for(j in 0..m-1)
        {
            var temp = bfs(i,j)
            if(temp>result) result = temp
        }
    }
    print(result)
}