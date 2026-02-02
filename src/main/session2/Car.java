package main.session2;

public class Car {
    // attribute
    String brand; // class variable
    //
    Integer year;
    // method - behavior
    // constructor - ham khoi tao
    public Car(){ // ham khoi tao khong tham so
        System.out.println("ABC XYZ...");
    }

    public Car(String brand, Integer year){ // ham khoi tao day du tham so
        this.brand = brand;
        this.year = year;
    }

    public void  run() {
        System.out.println(this.brand + " is running");

    }

    public void maintain(){
        System.out.println( this.brand + " is maintaining");
    }



    public boolean checkdate(){ // kiem tra nam san xuat  da qua han chua trong 10 nam
        int now = 2026;
        int yearP = this.year; // doi tuong ngam dinh trong class
        if (now - yearP > 10){
            return false;
        }else{
            return true;
        }
    }
}
