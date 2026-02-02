package main.ASM4.TrafficSystem;

public class Main {
    public static void main(String[] args) {
        Vehicle[] vehicles = {
                new Car("BMW", 250),
                new Bike("Yamaha", 120),
                new Train("Metro", 300),
                new Plane("Boeing", 900)
        };

        for (Vehicle v : vehicles) {
            v.move();
        }
    }
}



