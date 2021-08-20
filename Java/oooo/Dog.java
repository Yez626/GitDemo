package oooo;

public class Dog {
    public int weightInPounds;
     
    public Dog(int startingWeight) {
    weightInPounds = startingWeight;
    }
     
    public void makeNoise() {
    if (weightInPounds < 10) {
    System.out.println("yipyipyip!");
               } else if (weightInPounds < 30) {
              System.out.println("bark. bark.");
           } else {
              System.out.println("woof!");
           }
       }
    }