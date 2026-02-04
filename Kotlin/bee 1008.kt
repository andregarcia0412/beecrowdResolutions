import java.util.*
import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) {

    val br = BufferedReader(InputStreamReader(System.`in`))
    val number = br.readLine().toInt()
    val hours = br.readLine().toInt()
    val salary = br.readLine().toDouble()

    println(String.format("NUMBER = %d\nSALARY = U$ %.2f", number, (hours*salary)))
}
