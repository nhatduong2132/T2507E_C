package main.ASM4.TrafficSystem;

public class Plane extends  Vehicle{
    public Plane(String name, Integer maxSpeed){
        super(name,maxSpeed);
    }

    public void move(){
        System.out.println("Plane is flying");
    }
}
