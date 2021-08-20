public class function_max {
        /** Returns the maximum value from m. */
        public static int max(int[] m) {
            int Max = m[0];
            for (int i = 0; i < 6; i++) {
                if (m[i] < m[i + 1]) {
                    Max = m[i + 1];
                }
            }
            return Max;
        }
        public static void main(String[] args) {
            int[] numbers = new int[] { 9, 2, 15, 2,6,10, 22 };
            System.out.print(max(numbers));      
        }
    }
