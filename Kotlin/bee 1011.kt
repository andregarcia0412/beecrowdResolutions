import java.io.BufferedReader
import java.io.InputStreamReader
import kotlin.math.pow

fun main(args: Array<String>){
    val br = BufferedReader(InputStreamReader(System.`in`))
    val pi = 3.14159
    val raio = br.readLine().toDouble()

    println(String.format("VOLUME = %.3f", (4.0/3) * pi * raio.pow(3)))
}
