public class LargeDemo {
    public static int larger(int x, int y) {
        if (x > y) {
            return x;
        } else
            return y;
    }
    public static void main(String[] args){
        System.out.println(larger(5,-10));
    }
}




/*
1.use "public static" to declare a function in java
2.all function must be part of a class
3.all parameters of a function must have a type and the funtion itself must return a type

*/