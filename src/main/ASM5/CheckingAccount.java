package main.ASM5;

public class CheckingAccount extends BankAccount {

    private static final double LIMIT = -5_000_000;

    public CheckingAccount(String accountNumber, double balance) {
        super(accountNumber, balance);
    }

    @Override
    public void withdraw(double amount) {
        if (balance - amount >= LIMIT) {
            balance -= amount;
        } else {
            System.out.println("Vượt hạn mức thấu chi 5 triệu");
        }
    }
}
