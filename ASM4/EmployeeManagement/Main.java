package main.ASM4.EmployeeManagement;

public class Main {
    public static void main(String[] args) {
        Employee e1 = new FullTimeEmployee("DQN", "E01", 15000000.0);
        Employee e2 = new PartTimeEmployee("Alex", "E02", 80, 50000.0);

        System.out.println(e1.getSalary());
        System.out.println(e2.getSalary());
    }
}

