package main.ASM4.EmployeeManagement;

public class FullTimeEmployee extends Employee {
    private double fixedSalary;

    public FullTimeEmployee(String name, String id, double fixedSalary ){
        super(name,id);
        this.fixedSalary = fixedSalary;
    }

    @Override
    public double getSalary() {
        return fixedSalary;
    }
}
