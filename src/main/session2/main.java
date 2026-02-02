package main.session2;

public class main {
    public static void main(String[] args){

        Car c;
        c = new Car();
        int x = 10;
        c.brand = "Toyota";
        c.year = 2020;
        c.run();
        c.maintain();

        System.out.println("Hang xe: " + c.brand);
        boolean check = c.checkdate();

        if (check){
            System.out.println("Xe dang con han");
        }else{
            System.out.println("Xe het han");
        }
        Car b = new Car( "BMW" , 2025);
        b.year= 2021;
        b.checkdate();


        Car d = new Car("A",2009);
    }

}
