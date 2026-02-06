import java.io.BufferedReader
import java.io.InputStreamReader
import kotlin.math.pow
import kotlin.math.sqrt

fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val (a, b, c) = br.readLine().split(" ").map {it.toDouble()}

   val delta = b.pow(2) - (4 * a * c)
    if(delta < 0 || a == 0.0) {
       println("Impossivel calcular")
    } else {
        val r1 = (-b + sqrt(delta)) / (2 * a)
        val r2 = (-b - sqrt(delta)) / (2 * a)

        println(String.format("R1 = %.5f\nR2 = %.5f", r1, r2))
    }

}
