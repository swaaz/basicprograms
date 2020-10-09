
fun main(args: Array<String>) {
    print("Enter no. of rows : ")
    val rows = readLine()
    if (rows != null) {
        for (i in 1..rows.toInt()) {
            for (j in 1..i) {
                print("* ")
            }
            println()
        }
    }
}

