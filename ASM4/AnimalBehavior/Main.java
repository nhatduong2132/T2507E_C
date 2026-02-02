package main.ASM4.AnimalBehavior;

public class Main {
    public static void main(String[] args) {
        Animal[] animals = {
                new Lion("Simba"),
                new Elephant("Dumbo"),
                new Monkey("George")
        };

        for (Animal a : animals) {
            a.eat();
        }
    }
}



