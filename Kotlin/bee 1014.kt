import java.io.BufferedReader
import java.io.InputStreamReader
import kotlin.math.absoluteValue

fun main(args: Array<String>){
    val br = BufferedReader(InputStreamReader(System.`in`))
    val distanciaKm = br.readLine().toInt()
    val gastoLitros = br.readLine().toDouble()

    println(String.format("%.3f km/l", distanciaKm/gastoLitros))
}
