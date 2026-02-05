import java.io.BufferedReader
import java.io.InputStreamReader
import kotlin.math.pow
import kotlin.math.sqrt

fun main(args: Array<String>){
    val br = BufferedReader(InputStreamReader(System.`in`))
    val (x1, y1) = br.readLine().split(" ").map {it.toDouble()}
    val (x2, y2) = br.readLine().split(" ").map {it.toDouble()}

    println(String.format("%.4f", sqrt((x2-x1).pow(2)+(y2-y1).pow(2))))
}
