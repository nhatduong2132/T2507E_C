package main.ASM5;

public class SavingAccount extends BankAccount {

    public SavingAccount(String accountNumber, double balance) {
        super(accountNumber, balance);
    }

    @Override
    public void withdraw(double amount) {
        double fee = amount * 0.02;
        double total = amount + fee;

        if (balance >= total) {
            balance -= total;
        } else {
            System.out.println("Không đủ tiền (đã tính phí 2%)");
        }
    }
}

