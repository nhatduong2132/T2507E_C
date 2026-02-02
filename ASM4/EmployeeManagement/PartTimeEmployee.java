package main.ASM4.EmployeeManagement;

public class PartTimeEmployee extends Employee{
    private Integer hours;
    private double salaryPerHour;

    public PartTimeEmployee(String name, String id, Integer hours, double salaryPerHour){
        super(name,id);
        this.hours = hours;
        this.salaryPerHour = salaryPerHour;
    }

    @Override
    public double getSalary() {
        return hours * salaryPerHour;
    }
}
