import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>){
    val br = BufferedReader(InputStreamReader(System.`in`))
    val x = br.readLine().toDouble()

    if(x >= 0 && x <= 25) {
        println("Intervalo [0,25]")
    } else if(x > 25 && x <= 50) {
        println("Intervalo (25,50]")
    } else if(x > 50 && x <= 75) {
        println("Intervalo (50,75]")
    } else if(x > 75 && x <= 100) {
        println("Intervalo (75,100]")
    } else {
        println("Fora de intervalo")
    }
}
