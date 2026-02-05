import java.io.BufferedReader
import java.io.InputStreamReader
import kotlin.math.absoluteValue

fun main(args: Array<String>){
    val br = BufferedReader(InputStreamReader(System.`in`))
    val (a, b, c) = br.readLine().split(" ").map {it.toInt()}

    val maiorAB = (a+b+(a-b).absoluteValue)/2
    val maiorABC = (maiorAB+c+(maiorAB-c).absoluteValue)/2

    println("$maiorABC eh o maior")
}
