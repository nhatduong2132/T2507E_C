package main.ASM4.TrafficSystem;

public class Vehicle {
    private String name;
    private Integer maxSpeed;

    public Vehicle( String name, Integer maxSpeed){
        this.name = name;
        this.maxSpeed = maxSpeed;
    }

    public void move(){
        System.out.println("Vehicle is moving");
    }
}
