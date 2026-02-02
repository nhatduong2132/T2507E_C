package main.ASM5;

public class Main {
    public static void main(String[] args) {

        BankAccount normal = new BankAccount("A001", 10_000_000);
        normal.withdraw(3_000_000);
        normal.printBalance();

        SavingAccount saving = new SavingAccount("S001", 10_000_000);
        saving.withdraw(3_000_000);
        saving.printBalance();

        CheckingAccount checking = new CheckingAccount("C001", 1_000_000);
        checking.withdraw(5_500_000);
        checking.printBalance();

        VipAccount vip = new VipAccount("V001", 10_000_000);
        vip.deposit(5_000_000);
        vip.withdraw(3_000_000);
        vip.printBalance();
    }
}

