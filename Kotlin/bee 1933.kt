import java.io.BufferedReader
import java.io.InputStreamReader


fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))

    val (a, b) = br.readLine().split(" ").map {it.toInt()}

    println(maior(a,b))
}

fun maior(a: Int, b: Int): Int {
    if(a > b) {
        return a
    }
    return b
}
