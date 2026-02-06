import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val (a, b, c, d) = br.readLine().split(" ").map {it.toInt()}

    if(b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0){
        println("Valores aceitos")
    } else{
        println("Valores nao aceitos")
    }


}
