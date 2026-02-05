import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>){
    val br = BufferedReader(InputStreamReader(System.`in`))

    val tempoHoras = br.readLine().toInt()
    val velMediaKmH = br.readLine().toInt()

    println(String.format("%.3f", (tempoHoras * velMediaKmH)/12.0))
}
