package main.session6;

public class Student {
    public Integer id;

    public String name;

    public String email;

    public Student(Integer id, String name, String email) {
        this.id = id;
        this.name = name;
        this.email = email;
    }

    public void study(){
        System.out.println("Student study...");
    }

    public void playGame(){
        System.out.println(" Aptech Student play game");
    }

}

