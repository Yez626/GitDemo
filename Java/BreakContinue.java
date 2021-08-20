public class BreakContinue {
    public static void windowPosSum(int[] a, int n) {
      for (int i = 0; i < 6; i++) {
        if (a[i] <= 0) {
          continue;
        }
        else
        {
          if (i + n <= 5) {
            for (int k = 1; k <= n; k++) {
              a[i] += a[i + k];
            } }
          else {
              for(int k=1;i+k<=5;k++){
                a[i]+=a[i+k];
              }
            }
        }
           }
    }
  
    public static void main(String[] args) {
      int[] a = {1, 2, -3, 4, 5, 4};
      int n = 3;
      windowPosSum(a, n);
      for (int i = 0; i <= 5; i++)
      // Should print 4, 8, -3, 13, 9, 4
      System.out.println(java.util.Arrays.toString(a));
    }
  }