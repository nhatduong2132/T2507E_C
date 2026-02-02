package main.ASM4.TrafficSystem;

public class Car extends  Vehicle{
    public Car(String name, Integer maxSpeed){
        super(name,maxSpeed);
    }

    public void move(){
        System.out.println("Car is driving");
    }
}
