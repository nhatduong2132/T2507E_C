package main.ASM5;

public class VipAccount extends BankAccount {

    public VipAccount(String accountNumber, double balance) {
        super(accountNumber, balance);
    }

    @Override
    public void deposit(double amount) {
        if (amount > 0) {
            double bonus = amount * 0.01;
            balance += amount + bonus;
        }
    }

    @Override
    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            System.out.println("Không đủ số dư");
        }
    }
}

