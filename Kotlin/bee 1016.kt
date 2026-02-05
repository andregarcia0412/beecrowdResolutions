import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>){
    val br = BufferedReader(InputStreamReader(System.`in`))
    val n = br.readLine().toInt()
    println(String.format("%d minutos", n * 2))
}
