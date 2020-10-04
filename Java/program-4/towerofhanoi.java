//Tower of Hanoi program

public class MainClass
 {
   public static void main(String args[])
   {
      int ndisks;
      Scanner in = new Scanner(System.in);
      System.out.println("Enter the number of disks : ");
      ndisks = in.nextInt();
      doTowers(ndisks, 'A', 'B', 'C');
   }
   public static void doTowers(int topN, char from, char inter, char to) {
      if (topN == 1) {
         System.out.println("Disk 1 from " + from + " to " + to);
      }
     else 
     {
         doTowers(topN - 1, from, to, inter);
         System.out.println("Disk " + topN + " from " + from + " to " + to);
         doTowers(topN - 1, inter, from, to);
      }
   }
}