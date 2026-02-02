package main.ASM4.TrafficSystem;

public class Bike extends  Vehicle{
    public Bike(String name, Integer maxSpeed){
        super(name,maxSpeed);
    }

    public void move(){
        System.out.println("Bike is riding");
    }
}
