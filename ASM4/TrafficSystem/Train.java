package main.ASM4.TrafficSystem;

public class Train extends  Vehicle{
    public Train(String name, Integer maxSpeed){
        super(name,maxSpeed);
    }

    public void move(){
        System.out.println("Train is running");
    }
}
